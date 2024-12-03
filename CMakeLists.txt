cmake_minimum_required(VERSION 3.10)
project(MyProject)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 添加全局 include 目录
include_directories(${CMAKE_SOURCE_DIR}/include)

# 添加子目录
add_subdirectory(src)

# 添加主程序
add_executable(main main.cpp)

# 链接 src 中的库
target_link_libraries(main PRIVATE add sub)
