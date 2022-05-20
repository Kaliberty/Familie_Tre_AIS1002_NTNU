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

    /*  myTree->traverseDepthFirst([&](std::shared_ptr<FamilyTree::Node> f){
          myTree->getSearchList().emplace_back(f);
      }); */

    /*for(const auto& x : myTree->getSearchList()){
        std::cout << x->getData().getAge() << std::endl;
    }*/

    //  std::cout << myTree->getCurrentChildren()[1]->getData().getAge();

    UI i;

    UserInterface UI;

    UserInterface::mainMenu();

    while (running) {
        UserInterface::menuSelector(running);
        return 0;
    }


    return 0;
}