#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs pre-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node, which takes an integer
 *
 * Description: Visits the root node first, then recursively visits the left
 *              subtree, followed by the right subtree.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;

    func(tree->n);
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}
