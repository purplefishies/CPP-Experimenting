cmake_minimum_required(VERSION 2.8.8)

project(hello-world)

# Tell CMake to run moc when necessary:
set(CMAKE_AUTOMOC ON)
# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:

set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Widgets finds its own dependencies.
find_package(Qt5Widgets REQUIRED)

add_executable(hello_world main.cpp mainwindow.cpp application.qrc )

qt5_use_modules(hello_world Widgets)