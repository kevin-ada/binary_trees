#include "binary_trees.h"

/**
 *binary_tree_is_full - function that checks the full of a tree
 *
 @tree: the tree that traverses
 *
 *Return: 1 if it is full 0 if not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	int left = 0;

	int right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			left = binary_tree_is_full(tree->left);

			right = binary_tree_is_full(tree->right);

			if (right == 0 || left == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
