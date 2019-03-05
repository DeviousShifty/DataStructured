//
//  LinearNode.hpp
//  DataStructured
//
//  Created by Mumford, Ethan on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef LinearNode_h
#define LinearNode_h
#include "Node.hpp"

template<class Type>
class LinearNode : public Node<Type>
{
protected:
    LinearNode<Type> * next;
public:
    //Constructors
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
    //Methods
    void setNextNode(LinearNode<Type> * next);
};

//Constructors
/** This constructor is used for building the raw structure before values are knwon.
 */

template <class Type>
LinearNode<Type> :: LinearNode(Type data): Node<Type>()
{
    this->next = nullptr;
}
 
/**
 This constructor is used to create a reference to a instance with data and a known link.
 */

template <class Type>

LinearNode<Type> ::  LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}


template<class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type>*nextNodePointer)
{
    this->next = nextNodePointer;
}
template<class Type>
LinearNode<Type>*LinearNode<Type>::getNextNode()
{
    return next;
}

#endif /* LinearNode_h */

