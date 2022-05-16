#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include "family-tree/person.hpp"

TEST_CASE("Test Getters") {
        std::string firstName_ = "John";
        std::string lastName_ = "Henning";
        int age_ = 26;
        fooGender gender_ = Male;

        Person person(firstName_, lastName_, age_, gender_);

        REQUIRE("John" == person.getFirstName());
        REQUIRE("Henning" == person.getLastName());
        REQUIRE(26 == person.getAge());
        REQUIRE(Male == person.getGender());

}

TEST_CASE("Test Setters") {
        std::string firstName_ = "John";
        std::string lastName_ = "Henning";
        int age_ = 26;
        fooGender gender_ = Male;
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