#include <iostream>

template <int N>
struct Factorial {
    static const int value = N * Factorial<N - 1>::value;
};

template <>
struct Factorial<0> {
    static const int value = 1;
};

int main() {
    constexpr int num = 5;
    std::cout << "Factorial of " << num << " is: " << Factorial<num>::value << std::endl;
    return 0;
}
