#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_height - A function to check the height of a tree
 *
 * @tree: The tree to be checked
 *
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return (MAX(left_height, right_height) + 1);
}
