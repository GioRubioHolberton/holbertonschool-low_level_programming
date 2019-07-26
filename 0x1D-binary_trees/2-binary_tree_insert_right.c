#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to parent of the new node
 * @value: Value in the new node
 * Return: Pointer to new node or (NULL)
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *my_right = NULL;

	if (parent == NULL)
		return (NULL);
	my_right = binary_tree_node(parent, value);
	if (my_right == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		my_right->right = parent->right;
		my_right->right->parent = my_right;
	}

	parent->right = my_right;
	return (my_right);
}
