//
//  main.cpp
//  OS1
//
//  Created by ahmed ehab hamouda on 3/25/20.
//  Copyright © 2020 ahmed ehab hamouda. All rights reserved.
#include "treeNode.hpp"
#include <string>
#include <iostream>
#include <experimental/filesystem>
namespace fs= std::experimental::filesystem;



//
//void traverse(treeNode* Node){
//    for(auto &p : fs::directory_iterator(Node->getPath())){
//        string path= p.path().string();
//        Node->addChild(path);
//        cout<<path<<endl;
//        cout<<"shit"<<endl;
//    }
//
//    for (int i=1; i<=Node->getChildrenNumber(Node); i++)
//        if (fs::is_directory(Node->getChild(i)->getPath()))
//             traverse(Node->getChild(i));
//
//
//}
void traverse(treeNode* Node, int level = 0) {
    try{
    string t=Node->getPath();
    for ( auto& entry : fs::directory_iterator(t)) {
        string filenameStr = entry.path().filename().string();
        cout<<filenameStr<<endl;
        Node->addChild(entry.path().string());
        if (entry.is_directory()) {
            int k=Node->getChildrenNumber();
            traverse(Node->getChild(k), level+1);
        }
        else if (entry.is_regular_file()) {
    Node->getChild(Node->getChildrenNumber())->setsize(entry.file_size());
        }
        else
            std::cout << std::setw(level * 3) << "" << " [?]" << filenameStr << '\n';
    }
    }
    catch(fs::filesystem_error &e){
        cout<<e.what()<<endl;
    }
}

//void traverse(string path, int level = 0) {
//    for (const auto& entry : fs::directory_iterator(path)) {
//        string filenameStr = entry.path().filename().string();
//        if (entry.is_directory()) {
//            std::cout << filenameStr << '\n';
//            traverse(entry, level + 1);
//        }
//        else if (entry.is_regular_file()) {
//            std::cout <<  filenameStr
//                << ", size " << entry.file_size() << " bytes\n";
//        }
//
//    }
//}

int main(int argc, const char * argv[]) {
    treeNode *root= new treeNode("/Users");
    traverse(root);
    
    std::cout<<"botta is awesome"<<std::endl;
    
    return 0;
}
