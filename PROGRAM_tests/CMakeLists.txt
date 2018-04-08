project(PROGRAM_tests)

include_directories(../PROGRAM)

add_subdirectory(lib/gtest-1.7.0)
add_subdirectory(tests)

