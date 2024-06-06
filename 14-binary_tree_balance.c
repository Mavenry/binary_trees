#include "binary_trees.h"

/**
 * binary_tree_h - Measures the height of a binary tree for balance
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the tree
 */

size_t binary_tree_h(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			height_left = tree->left ? 1 + binary_tree_h(tree->left) : 1;
			height_right = tree->right ? 1 + binary_tree_h(tree->right) : 1;
		}
		return ((height_left > height_right) ? height_left : height_right);
	}
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0, balance_factor = 0;

	if (tree)
	{
		height_left = ((int)binary_tree_h(tree->left));
		height_right = ((int)binary_tree_h(tree->right));
		balance_factor = height_left - height_right;
	}
	return (balance_factor);
}

