#include "binary_trees.h"

/**
 * binary_tree_node- function that creates a binary node
 * @parent: represents the root
 * @value: data that will be held
 * Return: formation of the new_node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_element;

	new_element = malloc(sizeof(binary_tree_t));

	if (new_element == NULL)
	{
		return (NULL);
	}

	new_element->n = value;
	new_element->parent = parent;
	new_element->left = NULL;
	new_element->right = NULL;

	return (new_element);
}
