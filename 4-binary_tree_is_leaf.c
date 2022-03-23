#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - checks if the node is a leaf
 * @node: the node to check
 * Return: 1 if node is a leaf
 *         0 if not a leaf
 *         0 if node is NULL
 */
 
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
