# Binary_trees

> A binary tree can be defined as a tree data structure, why is it defined as a tree? Since each element in a binary tree can only have 2-children, we typically name them left and right children.

## Objectives
* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

  ![binary-tree-to-DLL](https://github.com/kevin-ada/binary_trees/assets/136765569/c3dae468-a236-40c4-a30b-b73e55c40534)


## Basic Binary Tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

