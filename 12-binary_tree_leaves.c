#include "binary_trees.h"

/**
 * binary_tree_leaves - get the number of leaves in a binary tree
 * @tree: pointer to node to count leave of
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n_leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	n_leaves += binary_tree_leaves(tree->left);
	n_leaves += binary_tree_leaves(tree->right);

	return (n_leaves);
}
