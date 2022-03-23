#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - add node in the right side of the parent
 * if it exists it move down one level and add new node first
 * @parent: parent of the specified node
 * @value: value of node
 * Return: NULL or new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
