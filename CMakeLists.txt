cmake_minimum_required(VERSION 3.21)
project(Lecture11Examples)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(01RangeBasedLoop 01RangeBasedLoop.cpp)
add_executable(02ParallelArrays 02ParallelArrays.cpp)
add_executable(03MessageLength 03MessageLength.cpp)
add_executable(04PossibleSolution 04PossibleSolution.cpp)
add_executable(05MultidimensionalSandbox 05MultidimensionalSandbox.cpp)
add_executable(06ModifyingRangeBasedLoop 06ModifyingRangeBasedLoop.cpp)
add_executable(07PaintBy3DArray 07PaintBy3DArray.cpp)