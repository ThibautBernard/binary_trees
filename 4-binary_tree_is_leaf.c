#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if node is at the end of binary tree
 * @node: node to check
 * Return: 1 if is leaf, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
		else
			return (0);
	}
	return (0);
}
