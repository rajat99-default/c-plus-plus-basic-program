#include <iostream>

int main() {
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    int reversedArr[size];

    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - 1 - i];
    }

    std::cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << reversedArr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
