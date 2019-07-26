#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to parent of the new node
 * @value: Value in the new node
 * Return: Pointer to new node or (NULL)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *my_left = NULL;

	if (parent == NULL)
		return (NULL);
	my_left = binary_tree_node(parent, value);
	if (my_left == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		my_left->left = parent->left;
		my_left->left->parent = my_left;
	}

	parent->left = my_left;
	return (my_left);
}
