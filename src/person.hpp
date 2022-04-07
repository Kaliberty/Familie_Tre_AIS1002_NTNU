#ifndef UNTITLED1_PERSON_HPP
#define UNTITLED1_PERSON_HPP

#include <string>

class Person {

public:
    Person(const std::string &name);

    const std::string &getName() const;

    void setName(const std::string &name);

private:
    std::string name_;
    char First_Name[50];            //
    char Last_Name[60];             //
    int Age,x;                      //
    bool Gender[0];                    //

};


#endif //UNTITLED1_PERSON_HPP
