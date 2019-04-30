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
    
    
//template <class Type>
//BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted)
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

template <class Type>
void AVLTree<Type> :: remove(Type item)
{
    removeNode(this->getRoot(), item);
}

#endif /* AVLTree_h */
