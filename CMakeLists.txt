cmake_minimum_required(VERSION 3.15)

project(SharedLibrary)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(lib)

add_subdirectory(main)
