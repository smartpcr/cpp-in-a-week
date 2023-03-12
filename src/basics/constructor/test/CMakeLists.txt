set(TEST_FILES test_employee.cpp)

include(${CMAKE_SOURCE_DIR}/cmake/gtest.cmake)

add_executable(test_employee ${TEST_FILES})

target_link_libraries(test_employee PRIVATE gtest_main)
target_link_libraries(test_employee PRIVATE Employee)