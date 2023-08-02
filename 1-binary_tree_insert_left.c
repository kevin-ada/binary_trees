#include "binary_trees.h"

/**
 *binary_tree_insert_left - function adds a node to the left tree
 *
 *@parent: head of the node
 *
 *@value: value of the node
 *
 *Return: Null if it fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	new_node->left = parent->left;
	parent->left->parent = new_node;

	return (new_node);
}


