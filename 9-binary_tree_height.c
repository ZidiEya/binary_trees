#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - Measures the height of the tree.
 * @tree: pointer to the root node to measure the height.
 * Return: If tree is NULL,func must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t i = 0, y = 0;

		i = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		y = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((i > y) ? i : y);
	}
	return (0);
}
