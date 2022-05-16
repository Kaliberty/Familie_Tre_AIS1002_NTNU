#include <iostream>
#include "person.hpp"
#include "Node.hpp"


int main(){
    std::cout << "Hello World!" << std::endl;
    std::cout << "Test of branch messege" << std::endl; //Test Github

    Person p("test");


    //Node test(p);

    std::cout << p.getName() << std::endl;
    return 0;
}
