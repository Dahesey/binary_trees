#include "binary_trees.h"
#include <stddef.h>

/**
 * mx - find max between two numbers
 * @a: first number
 * @b: second number
 *
 * Return: max
 */
int mx(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

/**
 * h - finds the height of a tree
 * @tree: tree to find height of
 *
 * Return: height or 0
 */
size_t h(const binary_tree_t *tree)
{
	size_t height;

	if (!tree)
		return (0);

	height = mx(h(tree->left), h(tree->right));

	return (height + 1);
}

/**
 * binary_tree_balance - mesures the balance factor of a binary tree
 * @tree: the tree
 *
 * Return: balance factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (h(tree->left) - h(tree->right));
}
