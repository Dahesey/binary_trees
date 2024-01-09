#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_size - A function to measure the size of a tree
 *
 * @tree: The pointer to the tree to be measured
 *
 * Return: 0 if the tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	return (!tree ? 0 : binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}
