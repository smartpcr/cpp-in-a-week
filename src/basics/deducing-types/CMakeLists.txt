set(SOURCE_FILES decltype.cpp)

include(${CMAKE_SOURCE_DIR}/cmake/boost.cmake)

add_library(DeducingTypes STATIC ${SOURCE_FILES})

include_directories(${Boost_INCLUDE_DIRS})
target_link_libraries(DeducingTypes Boost::type_index Boost::type_traits)