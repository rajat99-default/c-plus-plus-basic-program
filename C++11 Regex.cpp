#include <iostream>
#include <regex>
#include <string>

int main() {
    std::string text = "Hello, my email is example@email.com";
    std::regex emailRegex("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Z|a-z]{2,}\\b");

    if (std::regex_search(text, emailRegex)) {
        std::cout << "Email found in the text." << std::endl;
    } else {
        std::cout << "Email not found." << std::endl;
    }

    return 0;
}
