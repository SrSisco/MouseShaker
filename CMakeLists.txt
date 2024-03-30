cmake_minimum_required(VERSION 3.27)
project(raton)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")
add_executable(raton main.cpp)
