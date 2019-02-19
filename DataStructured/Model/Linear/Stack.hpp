//
//  Stack.h
//  DataStructured
//
//  Created by Mumford, Ethan on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Stack_h
#define Stack_h
#include "LinkedList.hpp"
#include <iostream>

virtual void add(Type item);
virtual void addAtIndex(int index, Type item);
virtual Type getFromIndex(int index);
virtual Type remove(int index);

template <class Type>
class Stack : public LinkedList<Type>
{
public:
    Stack();
    ~Stack();
    
    void push (Type data);
    Type pop();
    Type peek();
    
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index):
    Type remove(int index);
}
template <class Type>
Stack<Type> :: Stack() : LinkedList<Type>()
{
    //Empty
}
template <class type>
Stack<Type> :: ~Stack()
{
     while(this->size > 0)
     {
         pop();
     }
}
template <class Type>
void Stack<Type> :: push(Type data)
{
    LinearNode<Type> * add = new LinearNode<Type>(data);
    
    if(this->size == 0)
    {
        this->end = add;
    }
    else
        
    {
        add->setNextNode(this->front);
    }
    this-> front = add;
    this-> size++;
}
template <class Type>
void Stack<Type> :: add(Type data)
{
    push(data);
}
template <class Type>
void Stack<Type> :: addAtIndex(int index, Type data)
{
    assert(index == 0);
    push(data);
}
template <class Type>
Type Stack<Type> :: pop()
{
    assert ( this-> size > 0);
    Type removed = this-> front->getData();
    
    LinearNode<Type> * removedNode = this->getFront();
    this->front = removedNode->getNextNode();
    delete removedNode;
    
    this->size--;
    
    return removed;
}
template <class Type>
Type Stack<Type> :: remove(int index)
{
    assert(index == 0);
    return pop();
}

template < class Type>
Type Stack<Type> :: peek()
{
    assert(this->size > 0);
    return this->getFront()->getData();
}
template <class Type>
Type Stack<Type> :: getFromIndex(int index)
{
    assert(index == 0);
    return peek();
}











#endif /* Stack_h */
