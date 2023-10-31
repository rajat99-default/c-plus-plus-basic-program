#include <iostream>

int max(int a, int b, int c) {
    int max = a > b ? a : b;
    return max > c ? max : c;
}

int main() {
    int num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;
    int maximum = max(num1, num2, num3);
    std::cout << "Maximum is: " << maximum << std::endl;
    return 0;
}
