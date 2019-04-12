//
//  BinaryTreeNode.h
//  DataStructured
//
//  Created by Mumford, Ethan on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeNode_h
#define BinaryTreeNode_h
#include "Node.hpp"
#include <assert.h>

template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<type> * leftChild;
     BinaryTreeNode<type> * rightChild;
}
public BinaryTreeNode<Type>();
BinaryTreeNode<Type>();
BinaryTree<Type>(Type data);

BinaryTreeNode<Type> * getRoot();
void setRoot(BinaryTreeNode<Type> * root);
BinaryTreeNode<Type> * getLeftChild();
void setLeftChild(BinaryTreeNode<Type> * left);
BinaryTreeNode<Type> * getRightChild();
void setRightChild(BinaryTreeNode<Type> * right);
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNOde() : Node<Type>()
{
    
}


template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node <Type?(data)





#endif /* BinaryTreeNode_h */
