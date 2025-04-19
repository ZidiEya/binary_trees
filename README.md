# binary_trees
    binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child. A recursive definition using just set theory notions is that a (non-empty) binary tree is a tuple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set containing the root. Some authors allow the binary tree to be the empty set as well.
    The difference between a binary tree and a Binary Search Tree
    =>A Binary Tree is a non-linear data structure in which a node can have 0, 1 or 2 nodes. Individually, each node consists of a left pointer, right pointer and data element. 
    =>A Binary Search Tree is an organized binary tree with a structured organization of nodes.
    =>The depth of a node is the number of edges present in path from the root node of a tree to that node. 
    =>The height of a node is the number of edges present in the longest path connecting that node to a leaf node.
    =>The size of a tree is the number of nodes; a leaf by itself has size 1. The height of a tree is the length of the longest path; 0 for a leaf, at least one in any larger tree.

There are basically three traversal techniques for a binary tree that are:

    -Preorder traversal.
    -Inorder traversal.
    *Postorder traversal.


#For  exepetional day 
#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the right child of another
 * @parent: a pointer to the node to insert the right-child
 * @value: the value to store in the new node
 * Return: pointer or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;

    if (parent == NULL)
        return (NULL);

    newnode = malloc(sizeof(binary_tree_t));
    if (newnode == NULL)
    {
        return (NULL);
    }

    newnode->n = value;
    newnode->parent = parent;
    newnode->left = NULL;
    newnode->right = parent->right;
    parent->right = newnode;
    if (newnode->right)
        newnode->right->parent = newnode;

    return (newnode);
}


