#include "binary_trees.h"
#include <stddef.h>

/**
 * have_child - A macro to check if a node has a child
 *
 * @node: The node to be checked
 *
 * Return: the count
 */

#define have_child(node) ((node)->left || (node)->right ? 1 : 0)

/**
 * binary_tree_nodes - Counts the nodes with atleast one child
 *
 * @tree: A pointer to the tree to be checked
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	return (!tree ? 0 : binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + have_child(tree));
}
