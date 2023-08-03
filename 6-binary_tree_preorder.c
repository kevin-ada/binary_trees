#include "binary_trees.h"

/**
 *binary_tree_preorder - function that prints the elements
 *
 *@tree: traverse the tree
 *
 *@func: the function
 *
 *Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left,func);
		binary_tree_preorder(tree->right, func);
	}
}
