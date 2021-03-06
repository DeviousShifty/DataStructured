//
//  BinarySearchTree.h
//  DataStructured
//
//  Created by Mumford, Ethan on 4/22/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include "Tree.hpp"
#include <iostream>

using namespace std;
template <class Type>
class BinarySearchTree: public Tree<Type>

protected:
//MARK: Protcted Methods
int calculatedSize(BinaryTreeNode<Type> * startNode);
int calculatedHeight(BinaryTreeNode<Type> * startNode);
bool isBalanced(BinaryTreeNode<Type> * startNode);
bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);

void inOrderTraversal(BinaryTreeNode<Type> * inStart);
void preOrderTraversal(BinaryTreeNode<Type> * preStart);
void postOrderTraversal(BinaryTreeNode<Type> * postStart);

void destroyTree(BinaryTreeNode<Type> * node);

BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);

void removeNode(BinaryTreeNode<Type> * removeMe);
public:
//MARK: Public Methods
BinarySearchTree();
~BinarySearchTree();

BinaryTreeNode<Type> * getRoot();

void inOrderTraversal();
void preOrderTraversal()
void postOrderTraversal();
void demoTraversalSteps(BinaryTreeNode<Type> * node);

int getSize();
int getHeight();
bool isComplete();
bool isBalanced();

bool contains(Type value);
void insert(Type itemToInsert);
void remove(Type value);

Type findMinimum();
Type findMaximum();

template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return -1;
}
template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    return -1;
}
template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    return false;
}
template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return false;
}
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    
}
template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    
}
template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    
}
template <class Type>
bool BinarySearchTree<Type> :: contains(Type value)
{
    return false;
}
template <class Type>
void BinarySearchTree<Type> :: remove(Type item)
{
    
}
template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this ->root;
    
    if(current == nullptr)
    {
        this-> root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getData())
            {
                current = current->getLeftChild();
            }
            else if(itemToInsert > current->getData())
            {
                current = current->getRightChild();
                
            }
            else
            {
                cerr << "Item exists already - Exiting insert" << endl;
                delete insertMe;
                return;
            }
        }
    }
    if (previous->getData() > itemToInsert)
    {
        previous->setLeftChild(insertMe);
    }
    else
    {
        previous-> setRightChild(insertMe);
        
    }
    insertMe->setRootNode(previous);
}

}
#endif /* BinarySearchTree_h */
