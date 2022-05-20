#ifndef FAMILY_TREE_FAMILYTREE_HPP
#define FAMILY_TREE_FAMILYTREE_HPP

#include <string>
#include "person.hpp"
#include "Tree.hpp"

// FamilyTree.hpp is used to populate the template with a Person
class FamilyTree : public Tree<Person> {
public:
    using Tree<Person>::Tree;
};


#endif //FAMILY_TREE_FAMILYTREE_HPP
