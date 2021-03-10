#include "binary_trees.h"

/**
 * binary_tree_is_full - check if tree is full
 * @tree: a started node
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree && (tree->right && tree->left))
	{
		if (binary_tree_is_full(tree->left) == 0)
			return (0);
		if (binary_tree_is_full(tree->right) == 0)
			return (0);
		return (1);
	}
	else if (!tree->left && !tree->right)
		return (1);
	return (0);
}
