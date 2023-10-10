cmake_minimum_required(VERSION 3.0.0)
project(LookUpTable VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

# Set the directory where the header files can be found.
include_directories(${CMAKE_SOURCE_DIR}/headers)

# Gather all source files from the "src" directory
file(GLOB SRC_FILES "src/*.c")

# Append main.c to the list of source files
list(APPEND SRC_FILES main.c)

add_executable(LookUpTable ${SRC_FILES})
target_link_libraries(LookUpTable m)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)