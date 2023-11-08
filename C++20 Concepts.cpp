#include <iostream>

template <typename T>
concept Numeric = std::is_arithmetic_v<T>;

template <Numeric T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Sum: " << add(5, 7) << std::endl;
    // Uncommenting the line below would result in a compilation error
    // std::cout << "Sum: " << add("Hello, ", "World!") << std::endl;

    return 0;
}
