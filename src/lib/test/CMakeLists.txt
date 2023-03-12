set(TEST_FILES test_const_pointer.cpp)

include(${CMAKE_SOURCE_DIR}/cmake/gtest.cmake)

add_executable(test_const_pointer ${TEST_FILES})

target_link_libraries(test_const_pointer PRIVATE gtest_main)
target_link_libraries(test_const_pointer PRIVATE lib)