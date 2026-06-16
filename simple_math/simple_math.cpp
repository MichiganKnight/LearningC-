#include <iostream>

void simpleMath() {
    std::cout << "Enter a Number: ";

    int num;
    std::cin >> num;

    int doubleNum = num * 2;
    int tripleNum = num * 3;

    std::cout << "Double: " << doubleNum << std::endl;
    std::cout << "Triple: " << tripleNum << std::endl;
}

int getValueFromUser() {
    std::cout << "Enter a Number: ";

    int input;
    std::cin >> input;

    return input;
}