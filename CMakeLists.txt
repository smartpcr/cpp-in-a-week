cmake_minimum_required(VERSION 3.10)

project(cpp-in-a-week)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/out)

file(GLOB_RECURSE sources      src/main/*.cpp src/main/*.h)
file(GLOB_RECURSE sources_test src/test/*.cpp)
file(GLOB_RECURSE data resources/*)

# Add source files
add_executable(${PROJECT_NAME} ${sources} ${data})

# Just for example add some compiler flags.
#target_compile_options(${PROJECT_NAME} PUBLIC -std=c++1y -Wall -Wfloat-conversion)

# This allows to include files relative to the root of the src directory with a <> pair
#target_include_directories(${PROJECT_NAME} PUBLIC src/main)

file(COPY ${data} DESTINATION resources)

###############################################################################
## dependencies ###############################################################
###############################################################################

## This defines the variables Boost_LIBRARIES that containts all library names
## that we need to link into the program.
#find_package(Boost 1.36.0 COMPONENTS filesystem system REQUIRED)
#
#target_link_libraries(${PROJECT_NAME} PUBLIC
#    ${Boost_LIBRARIES}
#    # here you can add any library dependencies
#    )


###############################################################################
## testing ####################################################################
###############################################################################

# This is for our testing framework,
# we don't add REQUIRED because it's just for testing.
# People who might want to build the project to use it should not be required
# to install testing dependencies.
#find_package(GTest)
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
    DOWNLOAD_EXTRACT_TIMESTAMP ${PROJECT_BINARY_DIR}/googletest-download-timestamp
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(unit_tests ${sources_test})

# This define is added to prevent collision with the main.
# It might be better solved by not adding the source with the main to the
# testing target.
target_compile_definitions(unit_tests PUBLIC UNIT_TESTS)

target_link_libraries(unit_tests PRIVATE gtest_main)
target_link_libraries(unit_tests PRIVATE ${sources})

# This is the magic that makes the testing framework work.
# It basically adds a custom command that runs the tests after the build.
include(GoogleTest)
gtest_discover_tests(unit_tests)


###############################################################################
## packaging ##################################################################
###############################################################################

# All install commands get the same destination. this allows us to use paths
# relative to the executable.
install(TARGETS ${PROJECT_NAME} DESTINATION ${PROJECT_NAME}_destination)

# This is basically a repeat of the file copy instruction that copies the
# resources in the build directory, but here we tell cmake that we want it
# in the package.
install(DIRECTORY resources DESTINATION ${PROJECT_NAME}_destination)

# Now comes everything we need, to create a package
# there are a lot more variables you can set, and some
# you need to set for some package types, but we want to
# be minimal here.
set(CPACK_PACKAGE_NAME "${PROJECT_NAME}")
set(CPACK_PACKAGE_VERSION "1.0.0")

# We don't want to split our program up into several incomplete pieces.
set(CPACK_MONOLITHIC_INSTALL 1)

# This must be last
include(CPack)
