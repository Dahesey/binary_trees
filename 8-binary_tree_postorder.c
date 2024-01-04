#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_postorder - A fuction to traverse through a tree
 *			using post order traversal
 *
 * @tree: The tree to be traversed
 *
 * @func: The function to be called on each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
