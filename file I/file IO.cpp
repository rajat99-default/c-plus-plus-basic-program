#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream outputFile("example.txt");

    if (outputFile.is_open()) {
        outputFile << "Writing to a file in C++!\n";
        outputFile.close();
        std::cout << "File written successfully." << std::endl;
    } else {
        std::cerr << "Unable to open the file." << std::endl;
    }

    return 0;
}
