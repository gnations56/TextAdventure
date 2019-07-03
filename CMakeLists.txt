cmake_minimum_required(VERSION 3.14)

project(TextAdventure)

include_directories(./googletest/include ./googletest)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
add_subdirectory(test)
