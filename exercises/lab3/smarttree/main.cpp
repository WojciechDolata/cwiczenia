//
// Created by dolawojc on 3/18/18.
//

#include "SmartTree.h"
#include <ostream>
#include <string>
#include <memory>
#include <iostream>


int main(){
    std::unique_ptr<SmartTree> a=datastructures::CreateLeaf(5);
    std::cout<<a->value<<std::endl;
    return 0;
}
