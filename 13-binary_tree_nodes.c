#include "binary_trees.h"

/**
 *binary_tree-nodes - function that returns nodes in a tree
 *
 *@tree: traverses a tree
 *
 *Return: number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += ((tree->right || tree->left) ? 1 : 0);
		node += binary_tree_nodes(tree->left);
		node += binary_tree_nodes(tree->right);
		return (node);
	}
}
