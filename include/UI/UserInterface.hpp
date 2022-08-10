#ifndef FAMILY_TREE_USERINTERFACE_HPP
#define FAMILY_TREE_USERINTERFACE_HPP
//#include "src/person.hpp"
#include "../family-tree/person.hpp"
#include <iostream>

#include "../family-tree/person.hpp"
#include "../family-tree/FamilyTree.hpp"

//bool running = true;


class UserInterface {
public:
    UserInterface();

    ~UserInterface();


    static void mainMenu() {
        std::cout << "\n";
        std::cout << "Welcome to this family tree application\n";
        std::cout << "Please choose your desired option from the list bellow\n";
        std::cout << "1. Show my current tree\n";
        std::cout << "2. Add a new family member\n";
        //std::cout << "3. Edit Current tree\n";
        std::cout << "9. Exit\n";
        std::cout << "Option: ";
    }

    static void newPerson(std::shared_ptr<FamilyTree> myTree) {
        std::string firstName;
        std::string lastName;
        int age;
        std::string gender;
        std::cout << "\n";
        std::cout << "You have decided to add a new member to the family tree\n";
        std::cout << "Lets start by entering your name\n";
        std::cout << "First Name: ";
        std::cin >> firstName;
        Person p;
        p.setFirstName(firstName);
         std::cout << "Last Name: ";
         std::cin >> lastName;
         p.setLastName(lastName);
         std::cout << "Age: ";
         std::cin >> age;
         p.setAge(age);
         std::cout << "Gender [M]ale, [F]emale, [O]ther: ";
         std::cin >> gender;
         if (gender == "M" || gender == "m") {
             p.setGender(Male);
         } else if (gender == "F" || gender=="f") {
             p.setGender(Female);
         }  else if (gender == "O" || gender == "o"){
             p.setGender(Other);
         }
        myTree->addNode(p);
    }

    static void editTree(std::shared_ptr<FamilyTree> myTree) {
        int personToEdit = -1;

        // loop som leser verdier fra tre
        /*
        for (int i=0, i<9, i++){

        */
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
        std::cin >> personToEdit;
    }

    static void editPerson() {
        int editLevel = -1;
        std::cout << "\n";
        std::cout << "What information would you like to change?\n";
        std::cout << "1. First name\n";
        std::cout << "2. Last name\n";
        std::cout << "3. Age\n";
        std::cout << "4. Gender\n";
        std::cout << "Option: ";
        std::cin >> editLevel;

    }

    static void showTree(std::shared_ptr<FamilyTree> myTree) {
        std::cout << "This is your current tree:\n";
        std::cout << "Press 0 to go back to main menu\n";

        const auto& rootNode = myTree->getRoot();
        const auto& children = rootNode->getChildren();

        for (const auto& node : children) {
            const auto& person = node->getData();
            std::cout << "First Name: " << person.getFirstName() << std::endl;
            std::cout << "Last Name: " << person.getLastName()  << std::endl;
            std::cout << "Age: " << person.getAge() << std::endl;

            switch (person.getGender()) {
                case 0:
                    std::cout << "Gender: None" << std::endl;
                    break;
                case 1:
                    std::cout << "Gender: Male" << std::endl;
                    break;
                case 2:
                    std::cout << "Gender: Female" << std::endl;
                    break;
                case 3:
                    std::cout << "Gender: Other" << std::endl;
                    break;


            };
        }
    }


    static void editFirstName() {
        char name_;
        std::cout << "Enter the persons first name:\n";


    }

    static void editLastName() {
        char name_;
        std::cout << "Enter the persons last name:\n";

    }

    static void editAge() {
        int age_ = 0;
        std::cout << "Enter the persons age:\n";

    }

    static void editGender() {
        eGender gender;
        std::cout << "Enter the persons gender (Male, Female, Other):\n";

    }

    static void menuSelector(bool running, std::shared_ptr<FamilyTree> myTree) {
        // ... myTree
        while (running) {
            int userOption = -1;
            int menuLevel = -1;
            int personToEdit = 11;


            switch (menuLevel) {
                case -1:
                    std::cin >> userOption;
                case 0:
                    switch (userOption) {
                        case 1:
                            showTree(myTree);
                            menuLevel = 1;      //Show tree
                            break;
                        case 2:
                            newPerson(myTree);
                            menuLevel = 2;      //Create new tree
                            break;
                        /*case 3:                                   Har ikke tid til å impimentere, og derfor blitt kommentert ut
                            editTree(myTree);
                            menuLevel = 3;      //Edit Tree
                            break; */
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
                    newPerson(myTree);
                    if (userOption == 0) {
                        mainMenu();
                        menuLevel = 0;
                    }
                    break;
                case 3:
                    editTree(myTree);
                    break;
                default:
                    break;
            }







            /*if (editLevel == "F"){
                editFirstName();
            }
            else if (editLevel == "L") {
                editLastName();
            }
            else if (editLevel == "A") {
                editAge();
            }
            else if (editLevel == "G") {
                editGender();
            }
            else if (editLevel == "E"){
                menuLevel = 3;
            }

            switch (userOption) {                        //Switch Case for editing
                case a:                                 //Edit First Name
                    editFirstName();
                    break;
                case b:                                 //Edit Last Name
                    editLastName();
                    break;
                case c:                                 //Edit Age
                    editAge();
                    break;
                case d:                                 //Edit gender
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
                    */
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









     switch (editLevel) {
                        case 1:
                            editPerson();
                            break;
                        case 2:
                            editPerson();
                            break;
                        case 3:
                            editPerson();
                            break;
                        case 4:
                            editPerson();
                            break;
                        case 5:
                            editPerson();
                            break;
                        case 6:
                            editPerson();
                            break;
                        case 7:
                            editPerson();
                            break;
                        case 0:
                            menuLevel = 2;
                            break;
                        default:
                            break;

    */

#endif //FAMILY_TREE_USERINTERFACE_HPP