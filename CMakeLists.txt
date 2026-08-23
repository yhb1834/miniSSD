cmake_minimum_required(VERSION 3.16)

project(miniSSD)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(
    minissd
    src/main.cpp
    src/Page.cpp
    src/Block.cpp
    src/NAND.cpp
    src/FTL.cpp
)