#include "binary_trees.h"

/**
 *binary_tree_is_root - function checks if node is root
 *
 *@node: checks a Node
 *
 *Return: return 0 if its a node else 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent != NULL || node  == NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
