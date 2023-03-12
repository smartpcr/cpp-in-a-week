set(SOURCE_FILES const_pointer.cpp)

add_library(lib STATIC ${SOURCE_FILES})

target_include_directories(lib INTERFACE .)

add_subdirectory(test)