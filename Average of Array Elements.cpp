#include <iostream>

int main() {
    const int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    double average = sum / size;

    std::cout << "Average of array elements: " << average << std::endl;

    return 0;
}
