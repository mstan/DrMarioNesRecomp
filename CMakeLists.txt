cmake_minimum_required(VERSION 3.20)
project(DrMarioRecomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(DRMARIO_REGION "usa" CACHE STRING "Dr. Mario ROM region (usa or eu)")
set_property(CACHE DRMARIO_REGION PROPERTY STRINGS usa eu)
if(DRMARIO_REGION STREQUAL "usa")
    set(DRMARIO_PREFIX "dr-mario-usa")
    set(DRMARIO_CRC 0xDE581355)
elseif(DRMARIO_REGION STREQUAL "eu")
    set(DRMARIO_PREFIX "dr-mario")
    set(DRMARIO_CRC 0x9735D267)
else()
    message(FATAL_ERROR "DRMARIO_REGION must be usa or eu")
endif()

file(GLOB DRMARIO_PARTS CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/generated/${DRMARIO_PREFIX}_full_bank*_part*.c")

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
    generated/${DRMARIO_PREFIX}_full.c
    generated/${DRMARIO_PREFIX}_dispatch.c
    ${DRMARIO_PARTS}
)

target_compile_definitions(DrMarioRecomp PRIVATE
    NESRECOMP_SPLIT_PARTS_EXTERNAL
    DRMARIO_EXPECTED_CRC=${DRMARIO_CRC}
    DRMARIO_REGION_NAME="${DRMARIO_REGION}"
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
