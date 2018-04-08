cmake_minimum_required(VERSION 3.1)
project(PROGRAM)

set(SOURCE_FILES main.cpp)
add_executable(PROGRAM_run ${SOURCE_FILES})

add_subdirectory(PROGRAM)
add_subdirectory(PROGRAM_tests)

target_link_libraries(PROGRAM_run PROGRAM)
