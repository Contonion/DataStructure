//
//  Controller.cpp
//  DataStructure
//
//  Created by Jackman, Cade on 1/28/19.
//  Copyright © 2019 CadeJackman. All rights reserved.
//

#include "Controller.hpp"
void Controller :: start()
{
    cout << "Welcome to the Data Structures App." << endl;
    testLinear();
    usingNodes();
}
void Controller :: usingNodes()
{
    Node<int> mine(5);
    Node<string> wordHolder("words can be stored too!");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
    
}

void Controller :: testLinear()
{
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}
