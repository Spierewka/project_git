#include <iostream>

int policz(int a, int b) {
    return a*b;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "w pierwszym branchu" << policz(2, 3) << std::endl;
    return 0;
}
