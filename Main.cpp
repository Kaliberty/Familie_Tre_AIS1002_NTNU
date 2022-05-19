#include <iostream>
#include "include/family-tree/person.hpp"
#include "include/family-tree/Node.hpp"
#include "include/UI/UserInterface.hpp"

class UI{
public:
    UI() {}
};

bool running = true;
int main(){


    UI i;

    Person p;
    UserInterface UI;


    UserInterface::mainMenu();









    while(running){
        int userOption = 0;
        int menuLevel = 0;

        std::cin >> userOption;
        switch (menuLevel) {
            case 0:
                switch (userOption) {
                    case 1:
                        UserInterface::newTree();
                        menuLevel = 1;
                        break;
                    case 2:
                        UserInterface::editTree();
                        menuLevel = 2;
                        break;
                    case 3:
                        UserInterface::loadTree();
                        menuLevel = 3;
                        break;
                    case 9:
                        running = false;
                        break;
                    default:
                        break;
                }

            case 1:
                if (userOption == 0) {
                    UserInterface::mainMenu();
                    menuLevel = 0;
                }
                break;

            case 2:
                if (userOption == 0) {
                    UserInterface::mainMenu();
                    menuLevel = 0;
                }
                break;

            case 3:
                if (userOption == 0) {
                    UserInterface::mainMenu();
                    menuLevel = 0;
                }
                break;
        }
    }



    /*
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
    std::cout << f.getAge() << std::endl;*/
    return 0;
}
