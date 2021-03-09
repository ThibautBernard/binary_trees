#include "binary_trees.h"

/**
 * binary_tree_is_root - is a root node
 * @node: a node
 * Return: 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node->parent)
		return (1);
	return (0);
}
