#include "binary_trees.h"

/**
 * is_a_leaf - A macro for checking if a node is a child
 *
 * @node: The tree to be checked
 */

#define is_a_leaf(node) (!(node)->right && !(node)->left ? 1 : 0)


/**
 * binary_tree_is_full - checks if the tree is full
 *
 * @tree: A pointer to the root of the tree
 *
 * Return: 0 if tree is NULL, else 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int return_val;

	if (tree == NULL)
		return (0);
	else if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);
	else if (is_a_leaf(tree))
		return (1);

	return_val = binary_tree_is_full(tree->left);
	if (return_val == 0)
		return (0);
	return_val = binary_tree_is_full(tree->right);
	return (return_val);
}
