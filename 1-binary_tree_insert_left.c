#include "binary_trees.h"
/**
 * binary_tree_insert_left - add new node to child left or overwite if
 * already as a child left node
 * @parent: the parent of the node
 * @value: the value
 * Return: the node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	int tmp_n;

	if (parent)
	{
		if (parent->left == NULL)
		{
			parent->left = binary_tree_node(parent, value);
			return (parent->left);
		}
		else
		{
			tmp_n = parent->left->n;
			free(parent->left);
			parent->left = binary_tree_node(parent, value);
			parent->left->left = binary_tree_node(parent->left, tmp_n);
			return (parent->left->left);
		}
	}
	return (NULL);
}
