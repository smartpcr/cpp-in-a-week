set(SOURCE_FILES TextBlock.cpp)

add_library(TextBlock STATIC ${SOURCE_FILES})

target_include_directories(TextBlock INTERFACE .)

add_subdirectory(test)