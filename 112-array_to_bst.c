#include "binary_trees.h"
/**
 * array_to_bst - array into bst
 * @array: the array of integer
 * @size: size of the array
 * Return: The node or NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *root;

	root = NULL;
	while (i < size)
	{
		bst_insert(&root, array[i]);
		i++;
	}
	return (root);
}
