#include "person.hpp"


Person::Person(const std::string &name) : name_(name) {}

const std::string &Person::getName() const {
    return name_;
}

void Person::setName(const std::string &name) {
    name_ = name;
}
