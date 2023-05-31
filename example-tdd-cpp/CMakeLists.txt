cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(TDDExample VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# locate gtest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# create the executable
add_executable(TDDExample main.cpp)

# link gtest to the executable
target_link_libraries(TDDExample ${GTEST_LIBRARIES} pthread)
