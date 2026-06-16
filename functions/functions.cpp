#include <iostream>

void doB() {
    std::cout << "In doB()" << std::endl;
}

void doA() {
    std::cout << "Starting doA()" << std::endl;

    doB();

    std::cout << "Ending doA()" << std::endl;
}