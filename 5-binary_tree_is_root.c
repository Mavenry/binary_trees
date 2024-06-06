#include "binary_trees.h"

/**
 * binary_tree_is_root - check a node as a root
 * @node: check the node
 *
 * Return: 1 if node is a root
 *         0 if not a root
 *         0 if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}