#include "binary_trees.h"

/**
 * binary_tree_size - function that returns the size of a tree
 *
 *@tree: tree that should be traversed
 *
 *Return: the size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	size_t x = 0;

	size_t y = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		x = binary_tree_size(tree->left);
		y = binary_tree_size(tree->right);

		size = x + y + 1;
	}
	return (size);
}
