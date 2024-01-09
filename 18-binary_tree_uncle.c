#include "binary_trees.h"

/**
 * uncle - A macro to find the uncle of a node
 *
 * @node: The node to check
 */

#define uncle(node) (!(node)->parent->parent ? NULL : sibling((node)->parent))

/**
 * binary_tree_uncle - A function to find the uncle of a node
 *
 * @node: pointer to the tree to be checked
 *
 * Return: A pointer to the uncle of the node if it exists
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (!node || !node->parent ? NULL : uncle(node));
}
