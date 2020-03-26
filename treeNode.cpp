
//  treeNode.cpp
//  OS_backend
//
//  Created by Eman Ateya on 3/25/20.
//  Copyright © 2020 Eman Ateya. All rights reserved.
//


#include <iostream>
using namespace std;

#include "treeNode.hpp"

treeNode::treeNode( string path)
{
   
    this->path = path;
    children.resize(1500);
    childNumber=0;
}


void treeNode::addToSize(treeNode * node, double sizex)
{
    node->size += sizex;
}


double treeNode::getSize(treeNode * node)
{
    return node -> size;
}


int treeNode::getChildrenNumber()
{
    return this -> childNumber;
}


treeNode* treeNode::addChild(string pathx)
{
    int s = static_cast<int>(this->children.size());
    if (s == childNumber)
        parent->children.resize(2*s);
    this->children[childNumber] = new treeNode(pathx);
    children[childNumber]->parent = this;
    (this->childNumber)++;
    return this;
}

treeNode* treeNode::getChild( int childNum)
{
    return this->children[childNum-1];
}


string treeNode::getName(treeNode* node)
{
    return node->name;
}


string treeNode::getPath()
{
    return this->path;
}


void treeNode::setsize(double size){
    this->size=size;
}
