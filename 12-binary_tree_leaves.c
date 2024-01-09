#include "binary_trees.h"
#include <stddef.h>

/**
 * is_a_leaf - A macro to check if a node is a leaf
 *
 * @node: The node to be checked
 */

#define is_a_leaf(node) (!(node)->right && !(node)->left ? 1 : 0)

/**
 * binary_tree_leaves - A function to count the leaves on a binary tree
 *
 * @tree: The tree
 *
 * Return: The count
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	return (!tree ? 0 : binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right) + is_a_leaf(tree));
}
