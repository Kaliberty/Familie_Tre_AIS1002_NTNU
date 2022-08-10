#include <iostream>
#include <memory>
#include "include/family-tree/person.hpp"
#include "include/UI/UserInterface.hpp"
#include "FamilyTree.hpp"

class UI {
public:
    UI() {}
};

bool running = true;

int main() {
    Person basePerson;
    auto myTree = std::make_shared<FamilyTree>(basePerson);


    UI i;

    UserInterface UI;

    UserInterface::mainMenu();

    while (running) {
        UserInterface::menuSelector(running, myTree);
        return 0;
    }


    return 0;
}