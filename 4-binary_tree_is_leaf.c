#include "binary_trees.h"
/**
 * binary_tree_is_leaf - node is leaf or not
 * @node: a node
 * Return: True or False
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
