#include "binary_trees.h"
/**
 * bst_search - search for an element in bst
 * @tree: root
 * @value: value to find
 * Return: the node or null
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)tree);
	else if (value < tree->n)
		return (bst_search((bst_t *)tree->left, value));
	else
		return (bst_search((bst_t *)tree->right, value));
	return (NULL);
}
