#include "binary_trees.h"


/**
 * count_nodes - count the number of nodes
 * @root: a tree
 * Return: 0 or suù
 */
int count_nodes(const binary_tree_t *root)
{
	if (root == NULL)
		return (0);
	return (1 + count_nodes(root->left) + count_nodes(root->right));
}
/**
 * check_is_complete - check if tree is complete with index and nb_nodes
 * @tree: a tree
 * @index: index in array of the child nodes of a root
 * @nb_nodes: number of nodes
 * Return: 1 if is complete
 */
int check_is_complete(const binary_tree_t *tree, int index, int nb_nodes)
{
	if (tree == NULL)
		return (1);
	if (index >= nb_nodes)
		return (0);
	return (check_is_complete(tree->left, 2 * index + 1, nb_nodes) &&
		check_is_complete(tree->right, 2 * index + 2, nb_nodes));

}
/**
 * binary_tree_is_complete - is complete tree binary
 * @tree: a tree
 * Return: 1 if is complete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int number_of_nodes = 0;

	if (tree)
		number_of_nodes = count_nodes(tree);
	if (number_of_nodes > 0)
		return (check_is_complete(tree, 0, number_of_nodes));
	else
		return (0);
}
