#include "binary_trees.h"
/**
 * bst_insert - insert a node
 * @tree: root
 * @value: the value
 * Return: The node or NULL
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *root = *tree, *tmp;

	if (root == NULL)
	{
		tmp = binary_tree_node(NULL, value);
		*tree = tmp;
		return (tmp);
	}
	else
	{
		while (root)
		{
			if (value < root->n)
			{
				if (!root->left)
				{
					tmp = binary_tree_node(root, value);
					root->left = tmp;
					return (tmp);
				}
				root = root->left;
			}
			else if (value > root->n)
			{
				if (!root->right)
				{
					tmp = binary_tree_node(root, value);
					root->right = tmp;
					return (tmp);
				}
				root = root->right;
			}
			else
				return (NULL);
		}
	}
	return (NULL);
}
