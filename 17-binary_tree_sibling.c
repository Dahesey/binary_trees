#include "binary_trees.h"

/**
 * sibling - A macro to check for the sibling of a node
 *
 * @node: The node
 */
#define sibling(node) ((node)->parent->left == (node) ? (node)->parent->right : (node)->parent->left)

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
