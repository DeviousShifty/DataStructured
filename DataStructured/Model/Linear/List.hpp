//
//  List.hpp
//  DataStructured
//
//  Created by Mumford, Ethan on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include "../Nodes/LinearNode.hpp"

template <class Type>
{
protected :
    int size;
public:
//Structure // virtual means you can override it.
virtual void add(Type item) =0;
virtual void addAtIndex(int index, Type item) = 0;
virtual Type remove(int index) = 0;
virtual Type getFromIndex(int index) = 0;
//Helper //getters:
virtual int getSize() const = 0;
virtual LinearNode<Type> * getFront() =0;
virtual LInearNode<type> * getEnd() = 0;
};

virtual void addAtIndex(int indx)
#endif /* List_h */
