# test 的 CMakeLists.txt
add_executable(test_program test.cpp)

# 链接 src 中的库到 test_program
target_link_libraries(test_program PRIVATE add sub)