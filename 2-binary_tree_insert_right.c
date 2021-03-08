#include "binary_trees.h"
/**
 * binary_tree_insert_right - add new node to child right or overwite if
 * already as a child right node
 * @parent: the parent of the node
 * @value: the value
 * Return: the node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	int tmp_n;

	if (parent)
	{
		if (parent->right == NULL)
		{
			parent->right = binary_tree_node(parent, value);
			return (parent->right);
		}
		else
		{
			tmp_n = parent->right->n;
			free(parent->right);
			parent->right = binary_tree_node(parent, value);
			parent->right->right = binary_tree_node(parent->right, tmp_n);
			return (parent->right->right);
		}
	}
	return (NULL);
}
