#include "binary_trees.h"

/**
 * binary_tree_height - get height of b-tree
 * @tree: pointer to root node
 *
 * Return: size of binary tree - height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);

	l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (l_height > r_height ? l_height : r_height);
}
