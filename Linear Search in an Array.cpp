#include <iostream>

int main() {
    const int size = 7;
    int arr[size] = {12, 34, 5, 23, 67, 89, 45};
    int target = 23;
    bool found = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << target << " found in the array." << std::endl;
    } else {
        std::cout << target << " not found in the array." << std::endl;
    }

    return 0;
}
