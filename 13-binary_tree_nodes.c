#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - Counts nodes with min 1 child in a binary tree.
 * @tree: pointer to root node of tree to count the number of nodes.
 * Return: if tree is NULL, the func must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
