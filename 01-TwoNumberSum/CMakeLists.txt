cmake_minimum_required(VERSION 3.10)
project(01-TwoNumberSum)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)

add_library(solution solution.cpp)

target_include_directories(solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# CMakeLists.txt for tests

# Download and install GoogleTest
# This will download GoogleTest and build it locally
include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        release-1.11.0  # Use a specific tag/release
)

# Fetch GoogleTest and add it to the project
FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Add test executable
add_executable(test_solution test_solution.cpp)

# Link the test executable with GoogleTest and the math library
target_link_libraries(test_solution gtest_main solution)

# Add tests to CTest
include(GoogleTest)
gtest_discover_tests(test_solution)
