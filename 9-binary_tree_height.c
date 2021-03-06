#include "binary_trees.h"
/**
 * binary_tree_height - goes through a binary tree using post-order
 * @tree: root
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_l = 0;
	size_t count_r = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	count_l = (binary_tree_height(tree->left) + 1);
	count_r = (binary_tree_height(tree->right) + 1);
	if (count_l >= count_r)
	{
		return (count_l);
	}
	else
	{
		return (count_r);
	}
}
