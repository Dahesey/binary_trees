#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_preorder - A function to traverse through a binary
 *			tree using the preorder traversal
 * @tree: The tree to be traversed
 *
 * @func: A pointer to a function to call on each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
