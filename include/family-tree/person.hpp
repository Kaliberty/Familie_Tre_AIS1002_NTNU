#ifndef UNTITLED1_PERSON_HPP
#define UNTITLED1_PERSON_HPP

#include <string>

enum fooGender {Male, Female, Other, None};

class Person {

public:
    Person();

    Person(const std::string &firstName, const std::string &lastName, int age, fooGender gender);


    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    int getAge() const;

    void setAge(int age);



    fooGender getGender() const;

    void setGender(fooGender gender);


private:
    std::string firstName_ ="";         //
    std::string lastName_ ="";          //
    int age_ = 0;                        //
    fooGender gender_ = None;                   //Gender is set to bool to save on bits: 0=Male, 1=Female

};


#endif //UNTITLED1_PERSON_HPP
