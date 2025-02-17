//
//  Controller.hpp
//  DataStructure
//
//  Created by Jackman, Cade on 1/28/19.
//  Copyright © 2019 CadeJackman. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "FileController.hpp"
#include "../Testers/LinearTester.hpp"
using namespace std;
class Controller
{
private:
    void usingNodes();
    void testLinear();
public:
    void start();
    
};

#endif /* Controller_hpp */
