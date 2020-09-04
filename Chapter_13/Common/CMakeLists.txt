cmake_minimum_required(VERSION 3.17)
project(Common)

set(CMAKE_CXX_STANDARD 14)

set(src
        ${CMAKE_CURRENT_SOURCE_DIR}/main.c
        ${CMAKE_CURRENT_SOURCE_DIR}/Common.c
        ${CMAKE_CURRENT_SOURCE_DIR}/Common.h
        )

add_executable(Common ${src})