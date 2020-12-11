cmake_minimum_required(VERSION 3.17)
project(figures)

set(CMAKE_CXX_STANDARD 17)

add_executable(figures main.cpp Point.cpp Point.h Figure.h Rectangle.cpp Rectangle.h Circle.cpp Circle.h Const.h Triangle.cpp Triangle.h Polygon.cpp Polygon.h)