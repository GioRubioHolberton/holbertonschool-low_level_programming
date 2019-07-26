#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if given node is root
 * @node: Pointer to the node to check
 * Return: 1 if the node root, 0if the node otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
