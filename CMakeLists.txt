cmake_minimum_required(VERSION 3.22)

project(CppProjectTemplate VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

# declare a variable set(var_name value)
set(LIBRARY_NAME Library)
set(EXECUTABLE_NAME Executable)

option(COMPILE_EXECUTABLE "Wheather to compile the executable" ON)
add_subdirectory(configured)
add_subdirectory(src)
add_subdirectory(app)
