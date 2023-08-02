#include "binary_trees.h"

/**
 *binary_tree_insert_right - function that insersts data to the right
 *@parent: represents the head of the node
 *@value: value of the node
 *Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_element;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_element = binary_tree_node(parent, value);

	if (new_element == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		parent->right = new_element;
	}
	new_element->right = parent->right;
	parent->right->parent = new_element;

	return (new_element);
}
