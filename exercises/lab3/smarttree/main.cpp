//
// Created by dolawojc on 3/18/18.
//

#include "SmartTree.h"
#include <ostream>
#include <string>
#include <memory>
#include <iostream>
#include <sstream>

using namespace ::datastructures;
int main(){
    std::unique_ptr<datastructures::SmartTree> a=datastructures::CreateLeaf(5);
    std::cout<<a->value<<std::endl;
    std::unique_ptr<SmartTree> root;
    root = CreateLeaf(99);
    root = InsertLeftChild(move(root), CreateLeaf(100));
    root = InsertRightChild(move(root), CreateLeaf(88));
    root->left = InsertLeftChild(move(root->left), CreateLeaf(1234));
    root->left = InsertRightChild(move(root->left), CreateLeaf(4321));
    root->right = InsertLeftChild(move(root->right), CreateLeaf(897));
    root->right = InsertRightChild(move(root->right), CreateLeaf(761));
    std::cout<<DumpTree(root)<<std::endl;
    std::stringstream ss;
    PrintTreeInOrder(root, &ss);
    std::cout<<ss.str()<<std::endl;
    return 0;
}
