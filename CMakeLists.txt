cmake_minimum_required(VERSION 3.14)
project(RemoteFileIndexer
        VERSION 1.0
        DESCRIPTION "一个监测目录的 C++ 程序"
        LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


add_subdirectory(./Client)
add_subdirectory(./Server)

