cmake_minimum_required(VERSION 3.17)
project(Jump_Table)

set(CMAKE_CXX_STANDARD 14)

set(src
        ${CMAKE_CURRENT_SOURCE_DIR}/main.c
        ${CMAKE_CURRENT_SOURCE_DIR}/Jump_Table.c
        ${CMAKE_CURRENT_SOURCE_DIR}/Jump_Table.h
        )
add_executable(Jump_Table ${src})