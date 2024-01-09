#include "binary_trees.h"
#include <stdlib.h>
/**
 * is_a_root - A function to find the root of a tree
 *
 * @node: The node
 */
#define is_a_root(node) (!(node)->parent ? 1 : 0)


/**
 * binary_tree_is_root - A function to check if a node is a root
 *
 * @node: The node to be checked
 *
 * Return: 1 if root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return (node == NULL ? 0 : is_a_root(node));
}
