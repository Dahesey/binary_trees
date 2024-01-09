#include "binary_tree.h"
#include <stddef.h>

/**
 * binary_tree_leaves - A function to count the leaves on a binary tree
 *
 * @tree: The tree 
 *
 * Return: The count
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

