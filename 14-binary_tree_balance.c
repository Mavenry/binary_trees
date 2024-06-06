#include "binary_trees.h"

/**
 * binary_tree_h - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_h(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = tree->left ? binary_tree_h(tree->left) + 1 : 1;
	size_t right_height = tree->right ? binary_tree_h(tree->right) + 1 : 1;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = (int)binary_tree_h(tree->left);
	int right_height = (int)binary_tree_h(tree->right);

	return (left_height - right_height);
}

