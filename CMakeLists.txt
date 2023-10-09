cmake_minimum_required(VERSION 3.22)
project(LookUpTable C)

set(CMAKE_C_STANDARD 11)

add_executable(LookUpTable main.c)
target_link_libraries(LookUpTable m)