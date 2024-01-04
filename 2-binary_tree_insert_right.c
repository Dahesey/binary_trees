#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - A function to insert a node
 *				at the right of the parent
 *
 * @parent: The parent node
 *
 * @value: data
 *
 * Return: A pointer to the node created
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
