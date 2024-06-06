#include "binary_trees.h"

/**
 * is_full_binary_tree - determines if a binary tree is full
 * @tree: pointer to the root node of the tree to evaluate
 *
 * Return: 1 if the tree is full
 *         0 if the tree is not full or tree is NULL
 */
int is_full_binary_tree(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (1);

    if (tree->left != NULL && tree->right != NULL)
        return (is_full_binary_tree(tree->left) && is_full_binary_tree(tree->right));

    return (0);
}

