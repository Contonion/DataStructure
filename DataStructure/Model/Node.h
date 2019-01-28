//
//  Node.h
//  DataStructure
//
//  Created by Jackman, Cade on 1/28/19.
//  Copyright © 2019 CadeJackman. All rights reserved.
//

#ifndef Node_h
#define Node_h
#include <assert.h>
template <class Type>
class Node
{
private:
public:
    Node(Type data);
    Type getData();
    void setData(Type data);
};

#endif /* Node_h */
