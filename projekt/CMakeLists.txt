﻿# CMakeList.txt : CMake project for projekt, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("projekt")

# Add source to this project's executable.
add_executable (projekt "projekt.cpp" "projekt.h" "mathlib.cpp" "mathlib.h")

# TODO: Add tests and install targets if needed.
