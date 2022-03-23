#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - verifies if a node is a root of a binary tree.
 * @node: pointer to the node to check.
 *
 * Return: If node is a root - 1.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
