cmake_minimum_required(VERSION 2.8)
add_compile_options(-std=c++11)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -O0")
# 这个是将某个目录作为源文件目录提取变量
include_directories(./src/helper/)

aux_source_directory(./src BASESRC)
aux_source_directory(./src/helper BASESRC_HELPER)

PROJECT(test)
ADD_EXECUTABLE(mytest ${BASESRC} ${BASESRC_HELPER})