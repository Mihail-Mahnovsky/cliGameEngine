cmake_minimum_required(VERSION 3.10)

file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    source/*.cpp
    source/*.c
    source/*.cc
    source/*.cxx
    source/*.h
    source/*.hpp
)

add_executable(cliEngine ${SOURCES})