#include "binary_trees.h"

/**
 * binary_tree_nodes - count the number of nodes with at least one child
 * in a binary tree
 * @tree: pointer to node to coun from
 *
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_nodes = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		n_nodes += 1;

	n_nodes += binary_tree_nodes(tree->left);
	n_nodes += binary_tree_nodes(tree->right);

	return (n_nodes);
}
