#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds a node
 *
 *@node: node to be checked
 *
 *Return: return s the snode
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
