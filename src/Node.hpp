#ifndef UNTITLED1_NODE_HPP
#define UNTITLED1_NODE_HPP

#include <vector>
#include <string>
#include <memory>

template<class T>
class Node {

public:
   // explicit Node(const std::unique_ptr<Node<T>> *data) : data_(data) {}
    Node(T&);

 /*   [[nodiscard]] std::string getName() const {
        return name_;
    }

    void add(Node &f) {
        f.parent_ = this; // this -> Node*
        children_.emplace_back(&f);
    }
*/

private:
  T data_;



  /*  std::string name_;

    Node *parent_ = nullptr;
    std::vector<Node *> children_;
    //   template<class T>
    std::unique_ptr<Node> data_ = nullptr;
*/
};


#endif //UNTITLED1_NODE_HPP
