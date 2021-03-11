#include "binary_trees.h"


/**
 * binary_tree_is_bst - check that binary tree is bst
 * @tree: a tree
 * Return: 1 if true
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree->left && tree->left->n > tree->n)
		return (0);
	if (tree->right && tree->right->n < tree->n)
		return (0);
	if (!binary_tree_is_bst(tree->left) || !binary_tree_is_bst(tree->right))
		return (0);
	return (1);
}
