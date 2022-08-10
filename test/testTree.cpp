#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Tree.hpp"
#include "person.hpp"

//test person
std::string firstName_ = "Ola";
std::string lastName_ = "Nordman";
int age_ = 26;
eGender gender_ = Male;
Person person;



TEST_CASE("test Setters") {
    auto myTree = std::make_shared<Tree<Person>>(person);
    REQUIRE("" == myTree->getCurrentData().getFirstName());
    REQUIRE("" == myTree->getCurrentData().getLastName());
    REQUIRE(0 == myTree->getCurrentData().getAge());
    REQUIRE(None == myTree->getCurrentData().getGender());

    myTree->getCurrentData().setFirstName(firstName_);
    myTree->getCurrentData().setLastName(lastName_);
    myTree->getCurrentData().setAge(age_);
    myTree->getCurrentData().setGender(gender_);

    REQUIRE(firstName_ == myTree->getCurrentData().getFirstName());
    REQUIRE(lastName_ == myTree->getCurrentData().getLastName());
    REQUIRE(age_ == myTree->getCurrentData().getAge());
    REQUIRE(gender_ == myTree->getCurrentData().getGender());


}

TEST_CASE("test Getters") {
    std::string firstName_ = "Ola";
    std::string lastName_ = "Nordman";
    int age_ = 26;
    eGender gender_ = Male;

    Person person(firstName_, lastName_, age_, gender_);

    REQUIRE("Ola" == person.getFirstName());
    REQUIRE("Nordman" == person.getLastName());
    REQUIRE(26 == person.getAge());
    REQUIRE(Male == person.getGender());

}