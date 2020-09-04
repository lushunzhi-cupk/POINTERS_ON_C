cmake_minimum_required(VERSION 3.17)
project(Callback_Function)

set(CMAKE_CXX_STANDARD 14)

set(src
        ${CMAKE_CURRENT_SOURCE_DIR}/main.c
        ${CMAKE_CURRENT_SOURCE_DIR}/Callback_Function.c
        ${CMAKE_CURRENT_SOURCE_DIR}/Callback_Function.h
        )

add_executable(Callback_Function ${src})