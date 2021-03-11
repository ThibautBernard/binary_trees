#include "binary_trees.h"

/**
 * check_is_bst - check that binary treee is bst
 * @tree: root
 * @n_root: value of the root to compare
 * Return: 1 if yes
 */
int check_is_bst(const binary_tree_t *tree, int n_root)
{
	if (tree == NULL)
		return (1);
	if (tree->left && tree->left->n > tree->n)
		return (0);
	if (tree->right && tree->right->n < tree->n)
		return (0);
	if ((tree->n < n_root && tree->left && tree->left->n > n_root) ||
	(tree->n < n_root && tree->right && tree->right->n > n_root))
		return (0);
	if ((tree->n > n_root && tree->left && tree->left->n < n_root) ||
	(tree->n > n_root && tree->right && tree->right->n < n_root))
		return (0);
	if (!check_is_bst(tree->left, n_root) || !check_is_bst(tree->right, n_root))
		return (0);
	return (1);

}

/**
 * binary_tree_is_bst - check that binary tree is bst
 * @tree: a tree
 * Return: 1 if true
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (check_is_bst(tree, tree->n));
}
