//
//  treeNode.hpp
//  OS_backend
//
//  Created by Eman Ateya on 3/25/20.
//  Copyright © 2020 Eman Ateya. All rights reserved.
//

#ifndef treeNode_hpp
#define treeNode_hpp


#include <vector>
#include <stdio.h>
#include <string>
using namespace std;



class treeNode
{
private:
    string name;
    string path;
    int level;
    int childNumber;
    double size = 0;
    vector < treeNode* > children;
    treeNode* parent;
    
public:
    
    treeNode(string);
    
    void addToSize(treeNode*,double);
    double getSize(treeNode *);
    
    int getChildrenNumber();
    
    void setParent(treeNode*,treeNode*); // (parent, child)
    
    treeNode* addChild(string);
    
    treeNode* getChild(int);

    void setsize(double size);
    string getName(treeNode*);
    string getPath();
    
    
    
    

    //    void setName(string);
    //    string getName();
    //
    //    void setPath(string);
    //    string getpath();
};
#endif /* tree_hpp */
