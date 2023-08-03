#include "binary_trees.h"

/**
 * binary_tree_inorder - function that prints elements using in-order
 *@tree: tree that will be travesed
 *@func: The function to be used
 *Return; Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
