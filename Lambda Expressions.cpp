#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Using lambda expression to multiply each element by 2
    std::for_each(numbers.begin(), numbers.end(), [](int& num) {
        num *= 2;
    });

    // Displaying the modified vector
    std::cout << "Modified Numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
