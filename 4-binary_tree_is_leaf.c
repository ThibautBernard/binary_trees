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
		if (!node->left)
			if(!node->right)
				return (1);
	}
	return (0);
}
