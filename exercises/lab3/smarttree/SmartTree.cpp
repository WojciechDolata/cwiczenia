//
// Created by dolawojc on 3/18/18.
//

#include "SmartTree.h"
#include <ostream>
#include <string>
#include <memory>


namespace datastructures {
    std::unique_ptr <SmartTree> CreateLeaf(int value){
        std::unique_ptr <SmartTree> a = std::make_unique<SmartTree>();
        a->value = value;
        a->left_subtree = nullptr;
        a->right_subtree = nullptr;
        return a;
    }

    std::unique_ptr <SmartTree> InsertLeftChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> left_subtree) {
        if(tree->left_subtree == nullptr) {
            tree->left_subtree = std::move(left_subtree);
            return 0;
        }
        return 0;

    }
    std::unique_ptr <SmartTree> InsertRightChild(std::unique_ptr<SmartTree> tree, std::unique_ptr<SmartTree> right_subtree) {
        if(tree->right_subtree == nullptr) {
            tree->right_subtree = std::move(right_subtree);
            return 0;
        }
        return 0;
    }
    void PrintTreeInOrder(const std::unique_ptr<SmartTree> &unique_ptr, std::ostream *out) {

    }
    std::string DumpTree(const std::unique_ptr<SmartTree> &tree);
    std::unique_ptr <SmartTree> RestoreTree(const std::string &tree);
}
