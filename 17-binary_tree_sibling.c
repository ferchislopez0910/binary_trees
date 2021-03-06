#include "binary_trees.h"
/**
 * binary_tree_sibling - counts the leaves in a binary tree
 * @node: pointer to the node to find the sibling
 * Return: number leaves
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}

	if (node == node->parent->left)
	{
		if (node->parent->right)
		{
			return (node->parent->right);
		}
		else
			return (NULL);
	}
	else
	{
		if (node->parent->left)
		{
			return (node->parent->left);
		}
		return (NULL);
	}
}
