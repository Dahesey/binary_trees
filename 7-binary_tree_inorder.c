#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_inorder - A function to traverse through a tree
 *			using the inroder traversal
 *
 * @tree: The tree to be traversed through
 *
 * @func: The functionto call on the node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
