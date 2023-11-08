#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

int main() {
    std::vector<int> numbers = {9, 4, 2, 7, 1, 8, 3};

    // Using parallel version of std::sort
    std::sort(std::execution::par, numbers.begin(), numbers.end());

    // Displaying the sorted vector
    std::cout << "Sorted Numbers (Parallel): ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
