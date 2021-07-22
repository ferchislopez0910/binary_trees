#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * @tree: root
 * Return: number leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right && tree->left)
	{	return (binary_tree_nodes(tree->left) + 1 +
				binary_tree_nodes(tree->right));
	}
	if (tree->left && !tree->right)
		return (1);
	if (tree->right && !tree->left)
		return (1);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

}
