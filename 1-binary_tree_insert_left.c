#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - A function to insert a node at a left of a node
 *
 * @parent: The parent node
 *
 * @value: data
 *
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
