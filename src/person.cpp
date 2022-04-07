#include "person.hpp"


Person::Person(const std::string &name) : name_(name) {}

const std::string &Person::getName() const {
    return name_;
}

void Person::setName(const std::string &name) {
    name_ = name;
}

const std::string &Person::getFirstName() const {
    return First_Name;
}

void Person::setFirstName(const std::string &firstName) {
    First_Name = firstName;
}

const std::string &Person::getLastName() const {
    return Last_Name;
}

void Person::setLastName(const std::string &lastName) {
    Last_Name = lastName;
}

int Person::getAge() const {
    return Age;
}

void Person::setAge(int age) {
    Age = age;
}

bool Person::isGender() const {
    return Gender;
}

void Person::setGender(bool gender) {
    Gender = gender;
}
