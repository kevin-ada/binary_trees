#include "binary_trees.h"

/**
 * binary_tree_height_b - function that measures a binary tree
 *
 *@tree: tree to traverse
 *
 *Return: returns the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t x = 0;

	size_t y = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			x = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			y = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((x > y) ? x : y);
	}
}

/**
 *binary_tree_balance - balance factor of a tree
 *
 *@tree: tree tobe traversed
 *
 *Return: balancedfactor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0;

	int left = 0;

	int count = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));

		count = left - right;
	}
	return (count);
}

