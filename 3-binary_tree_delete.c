#include "binary_trees.h"
/**
 * binary_tree_delete - delete all the tree
 * @tree: root
 * Return: nothin
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
