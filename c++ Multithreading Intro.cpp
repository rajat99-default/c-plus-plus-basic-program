#include <iostream>
#include <thread>
#include <vector>

void partialSum(std::vector<int>& arr, int start, int end, int& result) {
    for (int i = start; i < end; ++i) {
        result += arr[i];
    }
}

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result1 = 0, result2 = 0;

    std::thread t1(partialSum, std::ref(data), 0, data.size() / 2, std::ref(result1));
    std::thread t2(partialSum, std::ref(data), data.size() / 2, data.size(), std::ref(result2));

    t1.join();
    t2.join();

    int finalResult = result1 + result2;
    std::cout << "Sum: " << finalResult << std::endl;

    return 0;
}
