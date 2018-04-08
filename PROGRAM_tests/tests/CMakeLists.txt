include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runPROGRAMTests
        PROGRAM_tests.cpp)

target_link_libraries(runPROGRAMTests gtest gtest_main)
target_link_libraries(runPROGRAMTests PROGRAM)
