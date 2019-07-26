#include "binary_trees.h"
/**
 * binary_tree_height - Print height of the tree.
 * @tree: Pointer to root.
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t my_left = 1, my_right = 1;


	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		return (0);
	if (tree->right == NULL)
		return (0);

	my_left += binary_tree_height(tree->left);
	my_right += binary_tree_height(tree->right);

	if (my_left < my_right)
		return (my_right);
	else
		return (my_left);
}
