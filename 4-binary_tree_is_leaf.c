#include "binary_trees.h"
<<<<<<< HEAD
/**
 * binary_tree_is_leaf - check if node is at the end of binary tree
 * @node: node to check
 * Return: 1 if is leaf, else 0
=======

/**
 * binary_tree_is_leaf - node is leaf or not
 * @node: a node
 * Return: True or False
>>>>>>> e93e5b09b819c390786c88ee270603211fe9ab7a
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
<<<<<<< HEAD
		if (node->left == NULL && node->right == NULL)
			return (1);
		else
			return (0);
=======
		if (!node->left)
			if(!node->right)
				return (1);
>>>>>>> e93e5b09b819c390786c88ee270603211fe9ab7a
	}
	return (0);
}
