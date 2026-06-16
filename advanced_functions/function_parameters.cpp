#include <iostream>
#include "../helpers/helper.h"

int add(const int x, const int y) {
    return x + y;
}

int subtract(const int x, const int y) {
    return x - y;
}

int multiply(const int x, const int y) {
    return x * y;
}

double divide(const int x, const int y) {
    return x / y;
}

void calculatorMenu() {
    std::cout << "=== Calculator Menu ===" << std::endl;
    std::cout << "1. Add" << std::endl;
    std::cout << "2. Subtract" << std::endl;
    std::cout << "3. Multiply" << std::endl;
    std::cout << "4. Divide" << std::endl;

    printEmptySpace();

    std::cout << "Enter a Number (1-4): ";

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1: {
            std::cout << "First Number: ";
            int x;
            std::cin >> x;

            std::cout << "Second Number: ";
            int y;
            std::cin >> y;

            std::cout << "Result: " << add(x, y) << std::endl;

            break;
        }

        case 2: {
            std::cout << "First Number: ";
            int x;
            std::cin >> x;

            std::cout << "Second Number: ";
            int y;
            std::cin >> y;

            std::cout << "Result: " << subtract(x, y) << std::endl;

            break;
        }

        case 3: {
            std::cout << "First Number: ";
            int x;
            std::cin >> x;

            std::cout << "Second Number: ";
            int y;
            std::cin >> y;

            std::cout << "Result: " << multiply(x, y) << std::endl;

            break;
        }

        case 4: {
            std::cout << "First Number: ";
            int x;
            std::cin >> x;

            std::cout << "Second Number: ";
            int y;
            std::cin >> y;

            std::cout << "Result: " << divide(x, y) << std::endl;

            break;
        }

        default:
            std::cout << "Invalid Choice" << std::endl;
            break;
    }
}