#include <iostream>
#include "include/family-tree/person.hpp"
#include "include/family-tree/Node.hpp"
#include "include/UI/UserInterface.hpp"

class UI{
public:
    UI() {}
};

bool running = true;
int main() {
    UI i;

    Person p;
    UserInterface UI;

    UserInterface::mainMenu();

    while (running) {
        UserInterface::menuSelector(running);
        return 0;
    }
}