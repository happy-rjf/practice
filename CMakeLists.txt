# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required( VERSION 3.15 )

# Set the project name
project (myFirstProject)

message( STATUS "CMAKE_PROJECT_NAME = ${CMAKE_PROJECT_NAME}" )
message( STATUS "PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}" )

# Add an executable

include(Cmake/infra.cmake)
include(Cmake/utility.cmake)
include(Cmake/defintion.cmake)
include(Cmake/compile_option.cmake)
include(Cmake/link_options.cmake)

add_executable( main Source/main.cpp )

target_compile_options(main
    PRIVATE

)

add_subdirectory(Source)

target_link_libraries(main
    leetcode
    source_utility
)