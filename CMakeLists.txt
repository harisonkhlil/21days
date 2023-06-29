cmake_minimum_required(VERSION 3.2)
project(21days)
set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCES ./chapter*/test/*.c*)
file(GLOB SOURCES ./chapter*/*.c*)

foreach(SOURCE ${SOURCES})
  get_filename_component(TARGET ${SOURCE} NAME_WE)
  add_executable(${TARGET} ${SOURCE})
endforeach()
