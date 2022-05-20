#ifndef UNTITLED1_TREE_HPP
#define UNTITLED1_TREE_HPP

#include <utility>
#include <vector>
#include <ostream>
#include <functional>


template<class T>
class Tree {
public:
    class Node {
    public:
        explicit Node(T &data) {
            data_ = data;
        };

      //  virtual ~Node() = default;

        auto &getData() { return data_; }

        void setData(T data) { data_ = data; }

        [[nodiscard]] bool isRoot() const { return {parent_ == nullptr}; }

        [[nodiscard]] bool isLeaf() const { return children_.empty(); }

        [[nodiscard]] bool hasParent() const { return parent_ != nullptr; }

        auto &getChildren() { return children_; }

        auto &getParent() { return parent_; }

        // friend std::ostream &operator<<(std::ostream &os, Node &n){os << *n.data_; return os;}
    private:
        T data_;
        std::vector<std::shared_ptr<Node>> children_;
        std::shared_ptr<Node> parent_ = nullptr;
    };


    explicit Tree(T &data) {
        auto rootNode = std::make_shared<Node>(data);
        root_ = rootNode;
        currentNode_ = root_;
    }

   // virtual ~Tree() = default;

    auto getCurrentNode() const { return currentNode_; }

    auto &getCurrentData() const { return currentNode_->getData(); }

    auto getCurrentChildren() { return currentNode_->getChildren(); }

    auto getCurrentParent() { return currentNode_->getParent(); }

    std::shared_ptr<Node> getRoot() const { return root_; }

    auto getSearchList() { return searchList_; }

    void addNode(T node) {
        auto addedNode = std::make_shared<Node>(node);
        currentNode_->getChildren().push_back(addedNode);
        addedNode->getParent() = currentNode_;
    }

    void traverseDepthFirst(const std::function<void(std::shared_ptr<Node>)> &f) {
        f(getRoot());
        for (auto c: getCurrentChildren()) {
            c->traverseDepthFirst(f);
        }
    }

private:
    std::shared_ptr<Node> root_;
    std::shared_ptr<Node> currentNode_;
    std::vector<std::shared_ptr<Node>> searchList_;
};


#endif //UNTITLED1_TREE_HPP
