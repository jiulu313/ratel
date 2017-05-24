cmake_minimum_required(VERSION 3.7)
project(ratel)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp classfile/ClassReader.cpp classfile/ClassReader.h common/DataTypeCom.h)
add_executable(ratel ${SOURCE_FILES})