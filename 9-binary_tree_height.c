#include "binary_trees.h"
#include <stddef.h>
/**
 * height - A function to check the height of a tree
 *
 * @tree: The tree to be checked
 *
 * Return: The height of the tree
 */

int height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);
	left = height(tree->left);
	right = height(tree->right);

	return (MAX(left, right) + 1);
}

/**
 * binary_tree_height - A function to check the maximum height of a tree
 *
 * @tree: The tree to be checked
 *
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (tree == NULL ? 0 : height(tree));
}
