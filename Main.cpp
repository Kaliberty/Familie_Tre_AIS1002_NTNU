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

class MinClass {

    // Constructor -> spesiell funksjon som kalles automatisk når du lager en instans av klassen
    // Navngis samme som klassen
    MinClass() {
    }

    // Destructor -> spesiell funksjon som kalles automatisk når instans går ut av scope
    // Navngis samme som klassen, men med ~ foran
    ~MinClass() {
    }


public:
    int test;
    void bursdag() {
        ++alder;
    }

    int getAlder() {
        return alder;
    }
    void setAlder(int a) {
        alder = a;
    }

private:
    int alder;
    int hoyde;


};

int main() {
    Person basePerson;
    auto myTree = std::make_shared<FamilyTree>(basePerson);

    //myTree->traverseDepthFirst(myTree->getRoot());
    // myTree er en instans av FamilyTree klassen

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
        UserInterface::menuSelector(running, myTree);
        return 0;
    }


    return 0;
}