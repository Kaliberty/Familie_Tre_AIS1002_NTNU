#ifndef UNTITLED1_TREE_HPP
#define UNTITLED1_TREE_HPP

#include <utility>
#include <vector>
#include <ostream>

//#include <string>



class Tree {
public:
    class Node {
    public:
        explicit Node(Person data) {
            data_ = data;
        };
        auto getData() { return data_;}
        void setData(Person data) { data_ = std::move(data);}

        [[nodiscard]] bool isRoot() const {return parent_ == nullptr;}
        [[nodiscard]] bool isLeaf() const {return children_.empty();}
        [[nodiscard]] bool hasParent() const {return parent_ != nullptr;}
        auto &getChildren() {return children_;}
        auto &getParent() {return parent_;}
       // friend std::ostream &operator<<(std::ostream &os, Node &n){os << *n.data_; return os;}
    private:
        Person data_;
        std::vector<std::shared_ptr<Node>> children_;
        std::shared_ptr<Node> parent_ = nullptr;
    };



    Tree(Person &data) {
        auto rootNode = std::make_shared<Node>(data);
        root_ = rootNode;
        currentNode_ = root_;
    }
    auto getCurrentNode() const{return currentNode_;}
    auto getCurrentData() const{return currentNode_->getData();}
    auto &getCurrentChildren() {return currentNode_->getChildren();}

    void addNode(const std::shared_ptr<Node>& node) {
        const auto& addedNode = node;
       // node.parent_ = this; // this -> Node*
       currentNode_->getChildren().push_back(node);
       addedNode->getParent() = currentNode_;

    }

private:
    std::shared_ptr<Node> root_;
    std::shared_ptr<Node> currentNode_;
};


#endif //UNTITLED1_TREE_HPP
