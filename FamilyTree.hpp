#ifndef FAMILY_TREE_FAMILYTREE_HPP
#define FAMILY_TREE_FAMILYTREE_HPP
#include <string>
#include "person.hpp"
#include "Tree.hpp"

class FamilyTree : public Tree<Person>{
public:
    using Tree<Person>::Tree;

};


#endif //FAMILY_TREE_FAMILYTREE_HPP
