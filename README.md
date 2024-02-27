# C - Binary Trees

Binary trees are a fundamental data structure used in computer science for organizing and storing data efficiently. Not to be confused with B-trees, binary trees are hierarchical data structures consisting of nodes, where each node has at most two children, referred to as the left child and the right child.

## Overview

Binary trees provide a flexible and efficient way to organize data. They are widely used in various applications, including search algorithms, data compression, and database indexing. Understanding binary trees is essential for mastering data structure and algorithm concepts.

## Resources

- [Binary Tree](https://en.wikipedia.org/wiki/Binary_tree) (note the first line: Not to be confused with B-tree.)
- [Data Structure and Algorithms - Tree](https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/)
- [Tree Traversal](https://en.wikipedia.org/wiki/Tree_traversal)
- [Binary Search Tree](https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/)
- [Data structures: Binary Tree](https://www.tutorialspoint.com/data_structures_algorithms/binary_tree_algorithm.htm)

## General

- **What is a binary tree**: A binary tree is a hierarchical data structure in which each node has at most two children, referred to as the left child and the right child.
- **Difference between binary tree and Binary Search Tree**: A binary tree is a general tree structure, while a Binary Search Tree (BST) is a specific type of binary tree in which the left child of a node contains only nodes with keys less than the node's key, and the right child contains only nodes with keys greater than the node's key.
- **Gain in time complexity compared to linked lists**: Binary trees offer improved time complexity for certain operations, such as searching, insertion, and deletion, compared to linked lists. The time complexity for these operations in a binary tree is O(log n), whereas in a linked list, it is O(n).
- **Depth, height, and size of a binary tree**: The depth of a node is the number of edges from the root to that node. The height of a binary tree is the maximum depth of any node in the tree. The size of a binary tree is the total number of nodes in the tree.
- **Different traversal methods**: Traversal methods are techniques used to visit all the nodes in a binary tree. Common traversal methods include inorder, preorder, and postorder traversal.
- **Types of binary trees**: 
    - Complete Binary Tree: A binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible.
    - Full Binary Tree: A binary tree in which every node has either zero or two children.
    - Perfect Binary Tree: A binary tree in which all interior nodes have two children and all leaves have the same depth or same level.
    - Balanced Binary Tree: A binary tree in which the height of the left and right subtrees of any node differ by at most one.
