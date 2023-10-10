cmake_minimum_required(VERSION 3.22)
project(LookUpTable C)

# Set the directory where the header files can be found.
include_directories(${CMAKE_SOURCE_DIR}/headers)

# Gather all source files from the "src" directory
file(GLOB SRC_FILES "src/*.c")

# Append main.c to the list of source files
list(APPEND SRC_FILES main.c)
set(CMAKE_C_STANDARD 99)

add_executable(LookUpTable main.c)
target_link_libraries(LookUpTable m)