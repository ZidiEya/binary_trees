#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - fun that goes through a binary tree
 * @tree: the tree to traverse
 * @func: func to apply to each node's value
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
