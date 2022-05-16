#include "../include/FamilyTree/person.hpp"


Person::Person(){}

const std::string &Person::getFirstName() const {
    return firstName_;
}

void Person::setFirstName(const std::string &firstName) {
    firstName_ = firstName;
}

const std::string &Person::getLastName() const {
    return lastName_;
}

void Person::setLastName(const std::string &lastName) {
    lastName_ = lastName;
}

int Person::getAge() const {
    return age_;
}

void Person::setAge(int age) {
    age_ = age;
}

bool Person::isGender() const {
    return gender_;
}

void Person::setGender(bool gender) {
    gender_ = gender;
}

