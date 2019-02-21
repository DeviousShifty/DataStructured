//
//  CircularList.hpp
//  DataStructured
//
//  Created by Mumford, Ethan on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef CircularList_h
#define CircularList_h

#include "../Nodes/DoubleNode.hpp"

template <class Type>
class CircularList
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    
    DoubleNode<Type> * findNode(int index);
public:
    CircularList();
    ~CircularList();
    
    //List methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type remove(int index);
    Type setAtIndex(int index, Type item);
    Type getFromIndex(int index);
    int getSize() const;
    
};

template <class Type>
CircularList<Type> :: CircularList()
{
    front = nullptr;
    end = nullptr;
    this->size = 0;
}
template <class Type>
CircularList<Type> :: ~CircularList()
{
    DoubleNode<Type> * current = front;
    while(this->front != nullptr)
    {
        front = front->getNext();
        delete current;
        current = front;
    }
}
template <class Type>
DoubleNode<Type> * CircularList<Type> :: findNode(int index)
{
    DoubleNode<Type> * foundNode = nullptr;
    
    
    return foundNode;
}
template <class Type>
void CircularList<Type> :: add(Type item)
{
    
}
template <class Type>
Type CircularList<Type> :: setAtIndex(int index, Type item)
template <class Type>
Type CircularList<Type> :: getFromIndex(int index)
{
    
}
template <class Type>
int CircularList<Type> :: getSize() const
{
    
}
template <class Type>
DoubleNode<Type> * CircularList<Type> :: findNode(int index)
{
    assert (index >= = && index < this->size);
    DoubleNode<Type> * nodeToFind;
    
    if(index < this-> size/2)
    {
        nodeToFind = this->front;
        for(int position = 0; position < index; position++)
        {
            nodeToFind = nodetoFind->getNext();
        }
    }
    else
    {
        nodeToFind = this->end;
        for(int position = this->size -1; position > index; position--)
        {
            nodeToFind = nodeToFind->getPrevious();
        }
    }
    return nodeToFind;
}
#endif /* CircularList_h */
