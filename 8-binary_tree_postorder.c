#include "binary_trees.h"

/**
 * binary_tree_postorder - function prints the elements of treees
 *
 *@tree: tree to be traversed
 *
 *@func: function to use
 *
 *Return: returns nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

	if (func == NULL || tree == NULL)
	{
		return;
	}
	else
	{

		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}

	func(tree->n);
}
