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
    BinaryTreeNode<Type> * left;
     BinaryTreeNode<Type> * right;
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
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}


template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode( Type data) :: Node<Type>(data)
{
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
void BinaryTreeNode<Type> :: setRootNode(BinaryTreeNode<Type> * newRoot)
{
    root = newRooot;
}
template <class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type> * right)
{
    this-> right = right;
}
template <class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type> * left)
{
    this-> left = left;
}
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRootChild()
{
    return this->root;
}
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild()
{
    return this->right;
}
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild()
{
    return this->left;
}

#endif /* BinaryTreeNode_h */
