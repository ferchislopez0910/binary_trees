#include "binary_trees.h"
/**
 * binary_tree_uncle - counts the leaves in a binary tree
 * @node: pointer to the node to find the sibling
 * Return: number leaves
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle_l;

	if (!node || !node->parent)
	{
		return (NULL);
	}

	uncle_l = node->parent;

	if (!node->parent->parent)
	{
		return (NULL);
	}

	if (node->parent == uncle_l->parent->left)
	{
		if (uncle_l->parent->right)
		{
			return (uncle_l->parent->right);
		}
		else
			return (NULL);
	}
	else
	{
		if (uncle_l->parent->left)
		{
			return (uncle_l->parent->left);
		}
		return (NULL);
	}
}
