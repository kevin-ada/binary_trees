#include "binary_trees.h"

/**
 *binary_tree_depth - function that  shows of the depth
 *
 *@tree: calculation of the depth
 *
 *Return: returnds the depth of the of the node 0
 */

size_t binary_tree_depth(const binary_tree-t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent)
	{
		count++;
		tree = tree->parent;
	}

	return (count);
}

