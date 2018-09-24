cmake_minimum_required(VERSION 3.10)
project(solver_NChipanaUTEC)

set(CMAKE_CXX_STANDARD 11)

add_executable(solver_NChipanaUTEC
        cmake-build-debug/AlgoritmosTypeTraits
        cmake-build-debug/AlgoritmosTypeTraits.cbp
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        LICENSE
        main.cpp Node.h Tree.h)
