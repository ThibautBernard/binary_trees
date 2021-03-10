#include "binary_trees.h"

/**
  * binary_tree_depth - depth of a tree
  * @tree: started node
  * Return: count or 0
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree && tree->parent)
	{
		count = binary_tree_depth(tree->parent);
		return (count + 1);
	}
	return (0);
}
