#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf (i.e., it has no children)
 *         0 if the node is not a leaf or if the node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
    {
        return 0;
    }

    if (node->left == NULL && node->right == NULL)
    {
        return 1;
    }

    return 0;
}

