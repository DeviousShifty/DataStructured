//
//  AVLTree.hpp
//  DataStructured
//
//  Created by Mumford, Ethan on 4/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    
    BinaryTreeNode<Type> * leftRotation (BinaryTreeNode<Type> * parent);
     BinaryTreeNode<Type> * rightRotation (BinaryTreeNode<Type> * parent);
     BinaryTreeNode<Type> * leftRightRotation (BinaryTreeNode<Type> * parent);
     BinaryTreeNode<Type> * rightLeftRotation (BinaryTreeNode<Type> * parent);
    
     BinaryTreeNode<Type> * balanceSubTree (BinaryTreeNode<Type> * parent);
    
     BinaryTreeNode<Type> * insertNode (BinaryTreeNode<Type> * parent, Type value);
     BinaryTreeNode<Type> * leftRotation (BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type>* parent);
    
public:
    AVLTree();
    
    void insert(Type itmToInsert);
    void remove(Type value);
};

template <class Type>
int AVLTree<Type> :: heightDifference(BinaryTreeNode<Type> * node)
{
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftChild());
    int rightHeight = this->calculateHeight(node->getRightLeftChild());
    balance = leftHeight - rightHeight;
    return balance;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild();
    
    parent->setRightChild(changedNode->getLeftChild());
    
    parent->setLeftChild(changedNode->getRightChild());
    changedNode->setRightChild(parent);
    
    return changedNode;
}
template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightLeftRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild();
    
    parent->setRightChild(leftRotation(changedNode));
    
    parent->setLeftChild(changedNode->getRightChild());
    changedNode->setRightChild(parent);
    
    return changedNode;
}
template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRightRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild();
    
    parent->setLeftChild(rightRotation(changedNode));
    
    parent->setLeftChild(changedNode->getRightChild());
    changedNode->setRightChild(parent);
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftChild();
    
    parent->setLeftChild(changedNode->getRightChild());
    
    parent->setLeftChild(changedNode->getRightChild());
    changedNode->setRightChild(parent);
    
    return changedNode;
}

/*
 
 */
template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type inserted)
if(parent == nullptr)
{
    return parent;
}
if(inserted < parent->getNodeData())
{
    parent->setLeftChild(removeNode(parent->getLeftNode(), inserted));
}
else
{
    BinaryTreeNode<Type> * temp;
    if(parent->getLeftNode() == nullptr && parent->getRightNode() == nullptr)
    {
        temp = parent;
        delete temp;
    }
    else if(parent->getLeftChild() == nullptr)
    {
        *parent = *parent->getRightChild();
    }
    else if(parent->getLeftNode() == nullptr)
    {
        *parent = *parent->getLeftChild();
    }
    else
    {
        BinaryTreeNode<Type> * leftMost = this->getLeftMostChild(parent->geRightNode());
        parent->setNodeData(leftMost->getNodeData());
        parent->setRightChild(removeNode(parent->getRightChild(), leftMost->getNodeData()));
    }

}
if(parent == nullptr)
{
    return parent;
}
return balanceSubTree(parent);
}


template <class type>
BinaryTreeNode<Type> * AVLTree<Type> :: balanceSubTree (BinaryTreeNode<Type> * parent)
{
    int balanceFactor = heightDifference(parent);
    
    if(balanceFactor > 1)
    {
        if(heightDifference(parent->getLeftChild()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent = leftRightRotation(parent);
        }
    }
    else if (balanceFactor < -1)
    {
        if(heightDifference(parent->getRightChild()) > 0)
        {
            parent = rightLeftRotation(parent);
            
        }
        else
        {
            parent = rightRotation(parent);
        }
    }
    return parent;
}


    




template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted)
if(parent == nullptr)
{
    parent = new BinaryTreeNode<Type>(inserted);
    this->setRoot(parent);
    return parent;
}
else if(inserted < parent->getNodeData())
{
    parent->setLeftChild(insertNode(parent->getLeftnode(), inserted));
    parent = balanceSubTree(parent);
}
else if(inserted > parent->getNodeData())
{
    parent->setRightChild(insertNode(parent->getRightNode(), inserted));
    parent = balanceSubTree(parent);
}
return parent;
}

template<class Type>
AVLTree<Type> :: AVLTree() : BinarySearchTree<Type>()
{
    this->root = nullptr;
}
template<class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent; Type inserted)
{}

#endif /* AVLTree_h */
