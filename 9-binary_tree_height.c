#include "binary_trees.h"
#include <stddef.h>

int height(const binary_tree_t *tree)
{
	int left, right;




/**
 * binary_tree_height - A function to check the height of a tree
 *
 * @tree: The tree to be checked
 *
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (MAX(left_height, right_height) + 1);
}
