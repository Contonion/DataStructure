//
//  BinaryTreeTester.hpp
//  DataStructure
//
//  Created by Jackman, Cade on 4/16/19.
//  Copyright © 2019 CadeJackman. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp
#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/NonLinear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void treeStuff();
    
};

#endif /* BinaryTreeTester_hpp */
