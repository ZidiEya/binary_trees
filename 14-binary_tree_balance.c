#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_balance - Measures balance factor.
 * @tree: pointer to root node of the tree to measure balance factor.
 * Return: if tree is NULL, returns 0, else returns balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left, right;
if (tree == NULL)
return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
return (left - right);
}

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

		i = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		y = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((i > y) ? i : y);
	}
	return (0);
}
