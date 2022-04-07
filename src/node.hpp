#ifndef UNTITLED1_NODE_HPP
#define UNTITLED1_NODE_HPP

#include <vector>
#include <string>
#include <memory>

template<typename T>
class node {

public:
    explicit node(const std::unique_ptr<node<T>> *data) : data_(data) {}

    [[nodiscard]] std::string getName() const {
        return name_;
    }

    void add(node& f) {
        f.parent_ = this; // this -> folder*
        children_.emplace_back(&f);
    }


private:
    std::string name_;

    node* parent_ = nullptr;
    std::vector<node*> children_;
 //   template<class T>
    std::unique_ptr<node> data_ = nullptr;

};


#endif //UNTITLED1_NODE_HPP
