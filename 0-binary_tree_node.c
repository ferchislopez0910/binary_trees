#include "binary_trees.h"
/**
 * binary_tree_node -  function that creates a binary tree node
 * @parent: ptr father
 * @value: value of new node.
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!node)
	{
		return (NULL);
	}
	else if (parent == NULL)
	{
		node->parent = NULL;
	}
	else
	{
		if (value > parent->n)
		{
			parent->right = node;
		}
		else
		{
			node->parent = parent;
			parent->left = node;
		}
	}
	node->n = value;
	node->right = NULL;
	node->left = NULL;
	return (node);
}
