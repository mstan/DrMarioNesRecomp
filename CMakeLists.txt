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

set(NESRECOMP_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/nesrecomp" CACHE PATH "NESRecomp engine checkout")

# nesrecomp/ and recomp-ui/ are git submodules (see .gitmodules); the pinned
# commit is the gitlink recorded in this repo. After cloning run setup.sh/.bat
# (git submodule update --init) to fetch them at the recorded commits.

set(NESRECOMP_BACKEND "cycle" CACHE STRING "CPU backend: cycle or legacy")
set_property(CACHE NESRECOMP_BACKEND PROPERTY STRINGS cycle legacy)
if(NESRECOMP_BACKEND STREQUAL "cycle")
    set(NESRECOMP_ROM "" CACHE FILEPATH "ROM image to recompile (not distributed)")
    if(DRMARIO_REGION STREQUAL "eu")
        set(DRMARIO_DEFAULT_SEEDS "cyc_seeds_eu.txt")
    else()
        set(DRMARIO_DEFAULT_SEEDS "cyc_seeds.txt")
    endif()
    set(NESRECOMP_CYCLE_SEEDS "${CMAKE_CURRENT_SOURCE_DIR}/${DRMARIO_DEFAULT_SEEDS}" CACHE FILEPATH "Cycle coverage seeds")
    set(NESRECOMP_HOST_COMPILER "" CACHE FILEPATH "Optional prebuilt host NESRecomp compiler")
    if(NOT EXISTS "${NESRECOMP_ROM}")
        message(FATAL_ERROR "Set NESRECOMP_ROM to the original ROM image for this title")
    endif()
    if(DRMARIO_REGION STREQUAL "eu")
        set(DRMARIO_CYCLE_CONFIG "game.toml")
        set(DRMARIO_CYCLE_TIMING PAL)
    else()
        set(DRMARIO_CYCLE_CONFIG "game-usa.toml")
        set(DRMARIO_CYCLE_TIMING NTSC)
    endif()
    include("${NESRECOMP_ROOT}/runner/cyc/project.cmake")
    nesrecomp_add_cycle_game(DrMarioRecomp
        ROM "${NESRECOMP_ROM}"
        GAME_CONFIG "${CMAKE_CURRENT_SOURCE_DIR}/${DRMARIO_CYCLE_CONFIG}"
        RECOMPILER "${NESRECOMP_HOST_COMPILER}"
        SEED_FILE "${NESRECOMP_CYCLE_SEEDS}"
        REGION ${DRMARIO_CYCLE_TIMING}
        PLAYERS 2
        BOXART "${CMAKE_CURRENT_SOURCE_DIR}/boxart.tga")
    return()
elseif(NOT NESRECOMP_BACKEND STREQUAL "legacy")
    message(FATAL_ERROR "NESRECOMP_BACKEND must be cycle or legacy")
endif()

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
set(NESRECOMP_RECOMP_UI "${CMAKE_CURRENT_SOURCE_DIR}/recomp-ui" CACHE PATH "recomp-ui checkout")
include("${NESRECOMP_RECOMP_UI}/recomp_ui.cmake")
recomp_target_launcher_ui(DrMarioRecomp CONSOLE nes BOXART ${CMAKE_SOURCE_DIR}/boxart.tga)
