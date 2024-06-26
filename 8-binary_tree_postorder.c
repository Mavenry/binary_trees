#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs post-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node, which takes an integer
 *
 * Description: Recursively visits the left subtree, then the right subtree, 
 *              and finally the root node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);
}
