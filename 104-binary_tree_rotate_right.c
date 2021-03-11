#include "binary_trees.h"


/**
 * binary_tree_rotate_right - switch node to the right,
 * @tree: a tree
 * Return: root or NULL
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{

	binary_tree_t *tmp_l, *save_root = tree;

	if (tree)
	{
		if (tree->left)
		{
			tree->left->parent = tree->parent;
			tree->parent = tree->left;
			tmp_l = tree->left;
			tree->left = tree->left->right;
			tmp_l->right = save_root;
			return (tmp_l);
		}
	}
	return (NULL);
}
