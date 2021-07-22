#include "binary_trees.h"
/**
 * binary_tree_sibling - counts the leaves in a binary tree
 * @tree: root
 * Return: number leaves
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
        return (0);
    if (!tree->left && !tree->right)
    {
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
    }
    return (0);
}
