#include <iostream>
#include <memory>
#include "include/family-tree/person.hpp"
#include "include/family-tree/Node.hpp"
#include "include/family-tree/Tree.hpp"
#include "FamilyTree.hpp"


int main(){
    Person familyName;

 //   f.setAge(11);
    familyName.setAge(12);
//   Node test(p);
//   Node left(f);

    familyName.setFirstName("test");
    auto myTree = std::make_shared<Tree>(familyName);
    std::shared_ptr<Tree::Node> f;
    myTree->addNode(f);

    std::cout << myTree->getCurrentData().getAge() << std::endl;
    //myTree->getCurrentNode()->

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



    return 0;
}
