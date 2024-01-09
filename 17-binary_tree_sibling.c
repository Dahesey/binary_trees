#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: A pointer to the node to find the sibling of
 *
 * Return: A pointer to the sibling node if it exists
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	return (!node || !node->parent ? NULL : sibling(node));
}
