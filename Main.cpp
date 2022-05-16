#include <iostream>
#include "include/FamilyTree/person.hpp"
#include "include/FamilyTree/Node.hpp"


int main(){
    std::cout << "Hello World!" << std::endl;
    std::cout << "Test of branch message" << std::endl; //Test GitHub

    Person p;
    Person f;


    //Node test(p);
    p.setFirstName("test");
    p.setAge(10);
    f.setAge(11);
    std::cout << p.getFirstName() << std::endl;
    std::cout << p.getAge() << std::endl;
    std::cout << f.getAge() << std::endl;
    return 0;
}
