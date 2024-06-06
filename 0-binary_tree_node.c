#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: - is a pointer to the parent node of the node to create
 * @value: - is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
	binary_tree_t *nNode;

	nNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (nNode == NULL)
	{
		return (NULL);
	}
	
        nNode->parent = parent;
	nNode->n = value;
	nNode->left = NULL;
	nNode->right = NULL;
	
	return (nNode);
}
