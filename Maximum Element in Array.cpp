#include <iostream>

int main() {
    const int size = 5;
    int arr[size] = {12, 34, 5, 23, 67};
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    std::cout << "Maximum element in the array: " << max << std::endl;

    return 0;
}
