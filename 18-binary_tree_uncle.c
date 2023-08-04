#include "binary_trees.h"

/**
 *binary_tree_uncle - function that checks if its auncle
 *
 *@node: the node to be checked
 *
 *Return: returns the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
