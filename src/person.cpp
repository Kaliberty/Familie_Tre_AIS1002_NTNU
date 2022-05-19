#include "../include/family-tree/person.hpp"


Person::Person(){}

Person::Person(const std::string &firstName, const std::string &lastName, int age, eGender gender) : firstName_(
        firstName), lastName_(lastName), age_(age), gender_(gender) {}

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

eGender Person::getGender() const {
    return gender_;
}

void Person::setGender(eGender gender) {
    gender_ = gender;
}



