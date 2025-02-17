//
//  List.hpp
//  DataStructure
//
//  Created by Jackman, Cade on 2/7/19.
//  Copyright © 2019 CadeJackman. All rights reserved.
//
#ifndef List_hpp
#define List_hpp
#include "../Nodes/LinearNode.hpp"
using namespace std;
template <class Type>
class List
{
protected:
    int size;
public:
    virtual void add(Type) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() = 0;
};
#endif /* List_hpp */
