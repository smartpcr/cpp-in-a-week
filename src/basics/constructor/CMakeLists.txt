set(SOURCE_FILES Employee.cpp)

add_library(Employee STATIC ${SOURCE_FILES})

target_include_directories(Employee INTERFACE .)

add_subdirectory(test)