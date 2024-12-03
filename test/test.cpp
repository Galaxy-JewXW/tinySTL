#include<iostream>
#include"myfunc.hpp"

int main() {
    int a = 3, b = 9;
    std::cout << myadd(a, b) << " " << mysub(b, a) << std::endl;
    return 0;
}