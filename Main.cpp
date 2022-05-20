#include <iostream>
#include <memory>
#include "include/family-tree/person.hpp"
#include "include/family-tree/Node.hpp"
#include "include/UI/UserInterface.hpp"
#include "include/family-tree/Tree.hpp"
#include "FamilyTree.hpp"

class UI {
public:
    UI() {}
};


bool running = true;
int main() {
    Person familyName;

    //
    familyName.setAge(12);
//   Node test(p);
//   Node left(f);

    familyName.setFirstName("test");
    auto myTree = std::make_shared<FamilyTree>(familyName);
    Person f;
    Person z;
    f.setAge(11);
    z.setAge(10);
    myTree->addNode(f);
    myTree->addNode(z);


    //  std::cout << myTree->getCurrentData().getAge() << std::endl;

    /*  myTree->traverseDepthFirst([&](std::shared_ptr<FamilyTree::Node> f){
          myTree->getSearchList().emplace_back(f);
      }); */



    /*for(const auto& x : myTree->getSearchList()){
        std::cout << x->getData().getAge() << std::endl;
    }*/

    //myTree->traverseDepthFirst();
    //std::cout << myTree->getSearchList().size();
    std::cout << myTree->getCurrentChildren()[1]->getData().getAge();

    //std::cout << myTree->getCurrentChildren().getAge();
    // myTree->getCurrentNode().getAge();

    // std::cout << myTree->getCurrentNode().isRoot << std::endl;
    // std::cout << myTree->getChildrenData() << std::endl;

    // auto myTree = std::make_shared<FamilyTree>(familyName);
    //   test.add(left);


    // std::cout << p.getFirstName() << std::endl;
    //  std::cout << p.getAge() << std::endl;
    //  std::cout << f.getAge() << std::endl;
    //   std::cout << test.getData().getAge() << std::endl;
    //std::cout << test->getAge();
//    std::cout << test.isRoot() << std::endl;

    //std::cout << test.parent_ << std::endl;

    //   std::make_shared<d>()





        UI i;

        Person p;
        UserInterface UI;

        UserInterface::mainMenu();

        while (running) {
            UserInterface::menuSelector(running);
            return 0;
        }


    return 0;
}