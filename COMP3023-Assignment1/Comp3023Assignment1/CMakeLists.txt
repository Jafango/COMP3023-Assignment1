﻿# CMakeList.txt : CMake project for Comp3023Assignment1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Comp3023Assignment1")

# Add source to this project's executable.
add_executable (Comp3023Assignment1 "Comp3023Assignment1.cpp" "Comp3023Assignment1.h" "Game.cpp" "Game.h" "ItemManager.cpp" "ItemManager.h" "AbstractItem.cpp" "AbstractItem.h" "Flashlight.cpp" "Flashlight.h" "Multi.h" "Multi.cpp") 

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Comp3023Assignment1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
