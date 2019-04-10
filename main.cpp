#include <iostream>
#include <string>

int main() {

    std::string stdin;

    // Print CppLisp Version
    std::cout << "CppLisp Version 0.0.0.1" << std::endl;
    std::cout << "Press Ctrl + C to Exit" << std::endl;

    while(true) {
        std::cout << "CppLisp >> ";
        std::cin >> stdin;
        std::cout << "No you're a " << stdin << std::endl;
    }

    return 0;
}