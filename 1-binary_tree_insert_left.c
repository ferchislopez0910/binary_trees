#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent: ptr father
 * @value: value of new tmp.
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	binary_tree_t *tmp = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->right = NULL;

	if (parent->left == NULL)
	{
		new->parent = parent;
		new->left = NULL;
		parent->left = new;
	}
	else
	{
		for (tmp = parent; tmp->left != NULL; tmp = tmp->left)
		{
			if (value > tmp->left->n)
			{
				new->parent = tmp;
				new->left = tmp->left;
				tmp->left = new;
				new->left->parent = new;
				new->left->left = NULL;
				return (new);
			}
		}
		new->parent = tmp;
		new->left = NULL;
		tmp->left = new;
	}
	return (new);
}
