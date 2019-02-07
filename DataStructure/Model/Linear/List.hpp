//
//  List.hpp
//  DataStructure
//
//  Created by Jackman, Cade on 2/7/19.
//  Copyright © 2019 CadeJackman. All rights reserved.
//

#ifndef List_hpp
#define List_hpp
#include "../Nodes/LindearNode.hpp"
template <class Type>
class List
{
protected:
    int size;
public:
    virtual void add(Type)
    virtual void addAtIndex(int index, Type item);
};

#endif /* List_hpp */
