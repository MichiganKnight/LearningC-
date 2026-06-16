#include <iostream>

#include "functions/functions.h"
#include "simple_math/simple_math.h"
#include "simple_math/return_five.h"

void printEmptySpace() {
    std::cout << std::endl;
}

void menu() {
    std::cout << "=== Tutorial Menu ===" << std::endl;

    printEmptySpace();

    std::cout << "1. Simple Math" << std::endl;
    std::cout << "2. Simple Functions" << std::endl;
    std::cout << "3. Return Five" << std::endl;
    std::cout << "4. Get Value From User" << std::endl;
    std::cout << "5. Exit" << std::endl;

    printEmptySpace();

    std::cout << "Enter a Number (1-5): ";

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            simpleMath();
            break;

        case 2:
            doA();
            break;

        case 3:
            std::cout << returnFive() << std::endl;
            std::cout << returnFive() + 2 << std::endl;
            break;

        case 4: {
            int x = getValueFromUser();
            int y = getValueFromUser();

            std::cout << x << " + " << y << " = " << (x + y) << std::endl;

            break;
        }

        case 5:
            std::cout << "Exiting..." << std::endl;
            break;

        default:
            std::cout << "Invalid Choice" << std::endl;
            break;
    }

}

int main() {
    std::cout << "Hello World!" << std::endl;

    std::cout << "Starting main()" << std::endl;

    printEmptySpace();

    menu();

    printEmptySpace();

    std::cout << "Ending main()" << std::endl;

    return 0;
}