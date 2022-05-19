#ifndef FAMILY_TREE_USERINTERFACE_HPP
#define FAMILY_TREE_USERINTERFACE_HPP
//#include "src/person.hpp"
#include "../family-tree/person.hpp"
#include <iostream>

//bool running = true;


class UserInterface{
public:
    UserInterface();
    ~UserInterface();


    static void mainMenu(){
        std::cout << "\n";
        std::cout << "Welcome to this family tree application\n";
        std::cout << "Please choose your desired option from the list bellow\n";
        std::cout << "1. Create a new family tree\n";
        std::cout << "2. Edit currenty loaded tree\n";
        std::cout << "3. Load a previous tree\n";
        std::cout << "9. Exit\n";
        std::cout << "Option: ";
    }

    static void newTree(){
        std::cout << "\n";
        std::cout << "You have decided to create a new family tree\n";
        std::cout << "Lets start by entering your name\n";
        std::cout << "Type 0 to go back\n";
        std::cout << "Name: ";
    }

    static void editTree(){
        std::cout << "\n";
        std::cout << "Who do you wish to edit the information off?\n";
        std::cout << "1. Myself\n";
        std::cout << "2. My father\n";
        std::cout << "3. My mother\n";
        std::cout << "4. My grandfather (fathers side)\n";
        std::cout << "5. My grandmother (fathers side)\n";
        std::cout << "6. My grandfather (mothers side)\n";
        std::cout << "7. My grandmother (mothers side)\n";
        std::cout << "Type 0 to go back\n";
        std::cout << "Option: ";
    }

    static void loadTree(){
        std::cout << "\n";
        std::cout << "Which tree do you want to load?\n";
        std::cout << "1. Tree 1\n";
        std::cout << "2. Tree 2\n";
        std::cout << "3. Tree 3\n";
        std::cout << "Type 0 to go back\n";
        std::cout << "Load number: ";
    }


















    /* Welcome to this family tree application.
     * Please press a number and enter to choose from menu:
     * 1. Start a new tree
     * 2. Edit tree
     * 3. Load tree
     * 4. exit
     *
     *
     * 1-> Tree setup
     * 1. add new person ( cin << navn >> endl;
     * 2. delete person
     * 3. edit person
     *
     * void treeSetup(){
     *  switch case
     *
     */
};

/*void userInterface::treeSetup(){

}

void createPerson(){

/*    std::cout << "What is the first name of this person?\n" << std::endl;
    std::cin >> firstName;
    std::cout << "What is the last name of this person\n" << std::endl;
    std::cin >> lastName;
    std::cout << "What is this" << firstName << "'s age?\n" << std::endl;
   // std::cin >>
}


    switch (userInput) {

        case 0:
            //Exit the editor
            if (!famTree -> getCurrentNode() -> isRoot()) {
                famTree_ -> chooseChildNode();
            }
            break;

        case 1:
            std::cout << "Enter first name:\n";
            userInputStr = nameFromUser();
            p.setFirstName(userInputStr);
            break;

        case 2:
            std::cout << "Enter last name\n";
            userInputStr = nameFromUser();
            p.setLastName(nameFromUser);
            break;

        case 3:
            std::cout << "Enter the persons gender\n";
            userInputStr = genderFromUser();
            p.setGender(genderFromUser);
            break;

        case 4:
            std::cout << "Enter the persons age\n";
            userInputStr = ageFromUser();
            p.setAge(ageFromUser);
            break;
    }
    */

#endif //FAMILY_TREE_USERINTERFACE_HPP