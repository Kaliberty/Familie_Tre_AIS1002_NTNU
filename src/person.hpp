#ifndef UNTITLED1_PERSON_HPP
#define UNTITLED1_PERSON_HPP

#include <string>

class Person {

public:
    Person();

    const std::string &getName() const;

    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    int getAge() const;

    void setAge(int age);

    bool isGender() const;

    void setGender(bool gender);


private:
    std::string firstName_;         //
    std::string lastName_;          //
    int age_;                        //
    bool gender_;                    //Gender is set to bool to save on bits: 0=Male, 1=Female

};


#endif //UNTITLED1_PERSON_HPP
