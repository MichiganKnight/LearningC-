#include <iostream>

#include "functions/functions.h"
#include "simple_math/simple_math.h"
#include "simple_math/return_five.h"

void printEmptySpace() {
    std::cout << std::endl;
}

int main() {
    std::cout << "Hello World!" << std::endl;

    simpleMath();

    printEmptySpace();

    std::cout << "Starting main()" << std::endl;

    printEmptySpace();

    doA();

    printEmptySpace();

    std::cout << "Ending main()" << std::endl;

    printEmptySpace();

    std::cout << returnFive() << std::endl;
    std::cout << returnFive() + 2 << std::endl;

    return 0;
}