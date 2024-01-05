#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - A function to check if a node is a root
 *
 * @node: The node to be checked
 *
 * Return: 1 if root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (1);
	else
		return (0);
}
