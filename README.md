# DiskAnalyzer
This isa GUI program that enables the user to navigate through directories.
It also allows the user to see how much each directory or a file occupies.
# This program is designed to work with any unix     based machine.
This program uses Modern c++ for the backend and Qt for the GUI.



# Files:

treeNode.hpp:
Defines the basic functions for the tree.
Each node can have any arbitrary number of children.
The size that is automatically located is 1500 for each now; however, this is custimizable.

treeNode.cpp:
includes the implementation of the functions defined in the treeNode.hpp

main.cpp:
Creates the tree.
Includes the function "traverse" that loops through directories in the hard disk.


