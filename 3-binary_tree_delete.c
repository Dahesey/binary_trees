#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - A function to delete an entire binary tree
 *
 * @tree: the tree to be deleted
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
