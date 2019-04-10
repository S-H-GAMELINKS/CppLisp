#include <iostream>

#include <readline/readline.h>
#include <readline/history.h>

int main() {

    char* stdin;

    // Print CppLisp Version
    std::cout << "CppLisp Version 0.0.0.1" << std::endl;
    std::cout << "Press Ctrl + C to Exit" << std::endl;

    while(true) {
        stdin = readline("CppLisp >> ");

        add_history(stdin);

        std::cout << "No you're a " << stdin << std::endl;
    }

    return 0;
}