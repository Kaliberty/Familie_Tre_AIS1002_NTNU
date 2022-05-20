#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "person.hpp"

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

TEST_CASE("test Setters") {
    std::string firstName_ = "Ola";
    std::string lastName_ = "Nordman";
    int age_ = 26;
    eGender gender_ = Male;
    Person person;

    REQUIRE("" == person.getFirstName());
    REQUIRE("" == person.getLastName());
    REQUIRE(0 == person.getAge());
    REQUIRE(None == person.getGender());

    person.setFirstName(firstName_);
    person.setLastName(lastName_);
    person.setAge(age_);
    person.setGender(gender_);

    REQUIRE(firstName_ == person.getFirstName());
    REQUIRE(lastName_ == person.getLastName());
    REQUIRE(age_ == person.getAge());
    REQUIRE(gender_ == person.getGender());


}