#ifndef FAMILY_TREE_PERSON_HPP
#define FAMILY_TREE_PERSON_HPP

#include <string>

enum eGender {None, Male, Female, Other};

class Person {

public:
    Person();

    Person(const std::string &firstName, const std::string &lastName, int age, eGender gender);


    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    int getAge() const;

    void setAge(int age);



    eGender getGender() const;

    void setGender(eGender gender);


private:
    std::string firstName_ ="";         //
    std::string lastName_ ="";          //
    int age_ = 0;                        //
    eGender gender_ = None;

};


#endif //FAMILY_TREE_PERSON_HPP
