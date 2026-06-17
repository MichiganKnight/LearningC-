#include <functional>
#include <iostream>
#include <map>
#include <ostream>
#include <string>

#include "helpers/helper.h"
#include "functions/functions.h"
#include "functions/void_functions.h"
#include "simple_math/simple_math.h"
#include "simple_math/return_five.h"
#include "advanced_functions/function_parameters.h"

struct MenuItem {
    std::string title;
    std::function<void()> action;
};

class TutorialMenu {
private:
    std::map<int, MenuItem> registry;

public:
    void registerCourse(const int command, const std::string& title, const std::function<void()>& action) {
        registry[command] = {title, action};
    }

    void run() {
        while (true) {
            std::cout << "\n=== Tutorial Menu ===\n" << std::endl;

            for (const auto& [key, item] : registry) {
                std::cout << key << ". " << item.title << std::endl;
            }
            std::cout << (registry.size() + 1) << ". Exit" << std::endl;

            std::cout << "\nEnter a Number (1-" << (registry.size() + 1) << "): ";
            int choice;
            std::cin >> choice;

            if (choice == registry.size() + 1) {
                std::cout << "Exiting..." << std::endl;
                break;
            }

            auto it = registry.find(choice);
            if (it != registry.end()) {
                it->second.action();
            } else {
                std::cout << "Invalid Choice!" << std::endl;
            }
        }
    }
};

int main() {
    std::cout << "Hello World!" << std::endl;
    std::cout << "Starting main()" << std::endl;

    TutorialMenu menu;

    menu.registerCourse(1, "Simple Math", simpleMath);
    menu.registerCourse(2, "Simple Functions", doA);

    menu.registerCourse(3, "Return Five", []() {
        std::cout << returnFive() << std::endl;
        std::cout << returnFive() + 2 << std::endl;
    });

    menu.registerCourse(4, "Get Value From User", []() {
        const int x = getValueFromUser();
        const int y = getValueFromUser();

        std::cout << x << " + " << y << " = " << (x + y) << std::endl;
    });

    menu.registerCourse(5, "Print 'Hi'", printHi);
    menu.registerCourse(6, "Function Parameters", calculatorMenu);

    menu.run();

    std::cout << "Ending main()" << std::endl;

    return 0;
}