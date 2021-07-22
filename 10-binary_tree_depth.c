#include "binary_trees.h"
/**
 * binary_tree_depth - goes through a binary tree using post-order
 * @tree: root
 * Return: void
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;


	if (tree == NULL || (tree->parent == NULL))
		return (0);

	count = (binary_tree_depth(tree->parent) + 1);
	return (count);
}
