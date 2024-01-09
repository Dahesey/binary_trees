#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - A function to check the depth of a tree
 *
 * @tree: The tree to be checked
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (!tree || !tree->parent ? 0 : binary_tree_depth(tree->parent) + 1);
}
