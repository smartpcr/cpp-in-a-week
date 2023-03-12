set(TEST_FILES test_textblock.cpp)

include(${CMAKE_SOURCE_DIR}/cmake/gtest.cmake)

add_executable(test_text_block ${TEST_FILES})

target_link_libraries(test_text_block PRIVATE gtest_main)
target_link_libraries(test_text_block PRIVATE TextBlock)