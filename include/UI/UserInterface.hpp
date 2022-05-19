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
        std::cout << "1. Show my current tree\n";
        std::cout << "2. Create a new family tree\n";
        std::cout << "3. Edit Current tree\n";
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

    static void editPerson(){
        std::cout << "\n";
        std::cout << "What information would you like to change?\n";
        std::cout << "1. First name\n";
        std::cout << "2. Last name\n";
        std::cout << "3. Age\n";
        std::cout << "4. Gender\n";
        std::cout << "Option: ";

    }

    static void showTree(){
        std::cout << "This is your current tree:\n";
        std::cout << "Press 0 to go back to main menu\n";
    }


    static void editFirstName(){
        char name_;
        std::cout << "Enter the persons first name:\n";


    }

    static void editLastName(){
        char name_;
        std::cout << "Enter the persons last name:\n";

    }

    static void editAge(){
        int age_ = 0;
        std::cout << "Enter the persons age:\n";

    }

    static void editGender(){
        eGender gender;
        std::cout << "Enter the persons gender (Male, Female, Other):\n";

    }

    static void menuSelector(bool running) {
        while (running) {
            int userOption = 0;
            int menuLevel = 0;
            int editOption = 0;

            std::cin >> userOption;

            switch (menuLevel) {
                case 0:
                    switch (userOption) {
                        case 1:
                            showTree();
                            menuLevel = 1;      //Show tree
                            break;
                        case 2:
                            newTree();
                            menuLevel = 2;      //Create new tree
                            break;
                        case 3:
                            editTree();
                            menuLevel = 3;      //Edit Tree
                            break;
                        case 9:
                            running = false;    //Stop program
                            break;
                        default:
                            break;
                    }
                case 1:
                    if (userOption == 0) {
                        mainMenu();
                        menuLevel = 0;
                    }
                    break;
                case 2:
                    newTree();
                    if (userOption == 0) {
                        mainMenu();
                        menuLevel = 0;
                    }
                    break;
                case 3:
                    std::cin >> editOption;                     //Need Help with this one
                    editPerson();
                    switch (editOption) {                        //Switch Case for editing
                        case 1:                                 //Edit First Name
                            editFirstName();
                            break;
                        case 2:                                 //Edit Last Name
                            editLastName();
                            break;
                        case 3:                                 //Edit Age
                            editAge();
                            break;
                        case 4:                                 //Edit gender
                            editGender();
                            break;
                        case 0:                                 //Go back
                            editTree();
                            menuLevel = 2;
                            break;
                        default:
                            break;
                            }
                            if (userOption == 0) {
                                mainMenu();
                                menuLevel = 0;
                            }
                            break;
                    }
            }
        }

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