#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf
 * @node: check
 * Return: 1 if the node leaf, 0 if the node not or (NULL)
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
