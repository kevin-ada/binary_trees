#include "binary_trees.h"

/**
 *tree_is_perfect - function that says if a tree is perfect
 *
 *@tree: traverses a tree
 *
 *Return: returns 0 is not perfect
 */

int tree_is_perfect(const binary_tree_t *tree)
{
	int right = 0;

	int left = 0;

	if (tree->left && tree->right)
	{
		left = 1 + tree_is_perfect(tree->left);

		right = 1 + tree_is_perect(tree->right);

		if (right == 1 && right != 0 && 1 != 0)
			return (right);
		return (0);
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

/**
 *binary_tree_is_perfect - function tree is perf
 *
 *@tree: tree to check
 *
 *Return: either 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = tree_is_perfect(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}


