#include "binary_trees.h"

/**
 *binary_tree_depth - function that  shows of the depth
 *
 *@tree: calculation of the depth
 *
 *Return: returnds the depth of the of the node 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

