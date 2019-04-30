//
//  BinaryTreeTester.cpp
//  DataStructure
//
//  Created by Jackman, Cade on 4/16/19.
//  Copyright © 2019 CadeJackman. All rights reserved.
//

#include "BinaryTreeTester.hpp"
#include "../Model/NonLinear/BinarySearchTree.hpp"
void BinaryTreeTester :: treeStuff() {
    testTree.insert(7);
    testTree.insert(1);
    testTree.insert(24);
    testTree.insert(6);
    testTree.insert(66);
    testTree.insert(5);
    testTree.insert(25);
    testTree.insert(4380);
    testTree.insert(99);
    testTree.insert(9001);
    testTree.insert(101);
    
    testTree.inOrderTraversal();
    testTree.preOrderTraversal();
    testTree.postOrderTraversal();
}

