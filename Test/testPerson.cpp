#define CATCH_CONFIG_MAIN

#include "catch.hpp"

#include "src/person.hpp"


    TEST_CASE("Test Getters") {


        Person person();
}

    TEST_CASE("Test Setters") {
        std::string firstName_ = "John";
        std::string lastName_ = "Henning";
        int age_ = 26;
        bool gender_ = 0;
        Person person;

        REQUIRE("" == Approx(person.getFirstName()));
        REQUIRE("" == Approx(person.getLastName()));
        REQUIRE(0 == Approx(person.getAge()));
        REQUIRE(0 == Approx(person.getGender()));

        person.setFirstName(firstName_);
        person.setLastName(lastName_);
        person.setAge(age_);
        person.setGender(gender_);

        REQUIRE(firstName_ == person.getFirstName);
        REQUIRE(lastName_ == person.getLastName);
        REQUIRE(age_ == person.getAge);
        REQUIRE(gender_ == person.getGender);

}'