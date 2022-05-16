#ifndef UNTITLED1_NODE_HPP
#define UNTITLED1_NODE_HPP

#include <vector>
#include <string>
#include <memory>

template<class T>
class Node {

public:
    explicit Node(T& data);



    void add(Node &f) {
        f.parent_ = this; // this -> Node*
        children_.emplace_back(&f);
    }

private:
  T data_;
  std::vector<std::shared_ptr<Node>> child_;
  std::shared_ptr<Node> parent_ = nullptr;

};

template<class T>
Node<T>::Node(T &data) {
data_ = data;
}


#endif //UNTITLED1_NODE_HPP
