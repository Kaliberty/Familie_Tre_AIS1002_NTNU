#include <iostream>
#include <memory>
#include "include/family-tree/person.hpp"
#include "include/UI/UserInterface.hpp"
#include "FamilyTree.hpp"

class UI {
public:
    UI() {}
};

bool running = true;

class MinClass {

    // Constructor -> spesiell funksjon som kalles automatisk når du lager en instans av klassen
    // Navngis samme som klassen
    MinClass() {
    }

    // Destructor -> spesiell funksjon som kalles automatisk når instans går ut av scope
    // Navngis samme som klassen, men med ~ foran
    ~MinClass() {
    }


public:
    int test;
    void bursdag() {
        ++alder;
    }

    int getAlder() {
        return alder;
    }
    void setAlder(int a) {
        alder = a;
    }

private:
    int alder;
    int hoyde;


};

<returverdi-type> <funksjons-navn> ( ... argumenter ...)
{
    int alder; // reserver skuffeplass til 1 stk integer
    if (alder == 5) { .... }
    ----- slutt på funksjon
    ----- skuffen frigis

    // Closure
    // At du bare åpner med { midt i en kodeblokk
    {
        int x; // reserver en skuffe til integer
        ....
    }; // skuffen frigis

} // <---- end of scope

/*
<returverdi-type> <funksjons-navn> ( ... argumenter ...)
{
    MinClass x(); // x -> symbolnavn, som bor i skuffe 2 + 3

    x.bursdag();
    x.test = 5;
    x.alder = 5; // FEIL fordi private


    int alder; // "alder" = symbolnavn
    // Når du skriver "alder", byttes det ut med "skuffe 1"
    // alder er et symbolnavn for skuffe 1
    alder = 1;
    if (alder == 5) {
        // if (skuffe 1 verdi == 5)
        // kodeblokk
    }
}
*/
int main() {
    Person basePerson;
    auto myTree = std::make_shared<FamilyTree>(basePerson);
    // myTree er en instans av FamilyTree klassen

    /*  myTree->traverseDepthFirst([&](std::shared_ptr<FamilyTree::Node> f){
          myTree->getSearchList().emplace_back(f);
      }); */

    /*for(const auto& x : myTree->getSearchList()){
        std::cout << x->getData().getAge() << std::endl;
    }*/

    //  std::cout << myTree->getCurrentChildren()[1]->getData().getAge();

    UI i;

    UserInterface UI;

    UserInterface::mainMenu();

    while (running) {
        UserInterface::menuSelector(running, myTree);
        return 0;
    }


    return 0;
}