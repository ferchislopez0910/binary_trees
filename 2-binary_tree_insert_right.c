#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the left-child
 * @parent: ptr father
 * @value: value of new tmp.
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	binary_tree_t *tmp = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->left = NULL;

	if (parent->right == NULL)
	{
		new->parent = parent;
		new->right = NULL;
		parent->right = new;
	}
	else
	{
		for (tmp = parent; tmp->right != NULL; tmp = tmp->right)
		{
			if (value < tmp->right->n)
			{
				new->parent = tmp;
				new->right = tmp->right;
				tmp->right = new;
				new->right->parent = new;
				new->right->right = NULL;
				return (new);
			}
		}
		new->parent = tmp;
		new->right = NULL;
		tmp->right = new;
	}
	return (new);
}