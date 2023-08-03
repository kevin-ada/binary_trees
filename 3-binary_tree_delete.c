#include "binary_trees.h"

/**
 * binary_tree_delete - clearing/deletinga tree
 *@tree: free a tree
 *Return: Nothinh
 */


void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return;
	}

	else
	{
		if (tree == NULL)
		{
			free(tree);
		}
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
}
