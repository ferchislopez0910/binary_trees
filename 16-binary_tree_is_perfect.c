#include "binary_trees.h"
int equal_depth(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree:  pointer to the root node of the tree to check
 * Return: Zero!.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lft = 0, rgt = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	lft = equal_depth(tree->left);
	rgt = equal_depth(tree->right);

	if ((lft - rgt) == 0)
		return (1);

	return (0);
}
/**
 * equal_depth - check for the size of binary tree.
 * @tree: binary tree root.
 * Return: a size.
 */
int equal_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (equal_depth(tree->left) + 1 + equal_depth(tree->right));
}
