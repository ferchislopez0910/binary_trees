#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance factor of a tree
 * @tree: root
 * Return: number leaves
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left && tree->right)
		return (2);
	else if ((!tree->left) || (!tree->right))
		return (-1);
	return (0);
}
