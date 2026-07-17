cmake_minimum_required(VERSION 3.20)
project(DrMarioRecomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(NESRECOMP_ROOT ${CMAKE_SOURCE_DIR}/nesrecomp)

# nesrecomp/ and recomp-ui/ are git submodules (see .gitmodules); the pinned
# commit is the gitlink recorded in this repo. After cloning run setup.sh/.bat
# (git submodule update --init) to fetch them at the recorded commits.

include(${NESRECOMP_ROOT}/runner/runner.cmake)

list(APPEND CMAKE_PREFIX_PATH "${NESRECOMP_ROOT}/runner/external/SDL2/cmake")
find_package(SDL2 REQUIRED)

add_executable(DrMarioRecomp
    ${NESRECOMP_RUNNER_SOURCES}
    extras.c
    generated/dr-mario_full.c
    generated/dr-mario_dispatch.c
)

target_include_directories(DrMarioRecomp PRIVATE
    ${NESRECOMP_RUNNER_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}
    ${SDL2_INCLUDE_DIRS}
)

target_link_libraries(DrMarioRecomp PRIVATE ${SDL2_LIBRARIES})

if(WIN32)
    target_link_libraries(DrMarioRecomp PRIVATE ws2_32)
    add_custom_command(TARGET DrMarioRecomp POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${NESRECOMP_ROOT}/runner/external/SDL2/lib/x64/SDL2.dll"
            "$<TARGET_FILE_DIR:DrMarioRecomp>"
    )
endif()

if(MSVC)
    target_compile_options(DrMarioRecomp PRIVATE /W3 /WX-)
    target_compile_options(DrMarioRecomp PRIVATE /wd4102)
endif()

# ---- Pre-boot GUI launcher (recomp-ui / Dear ImGui) ----
include(${CMAKE_SOURCE_DIR}/recomp-ui/recomp_ui.cmake)
recomp_target_launcher_ui(DrMarioRecomp BOXART ${CMAKE_SOURCE_DIR}/boxart.tga)
if(WIN32)
    # OpenGL for the ImGui GL3 backend (previously via the RmlUi launcher.cmake).
    target_link_libraries(DrMarioRecomp PRIVATE opengl32)
endif()
