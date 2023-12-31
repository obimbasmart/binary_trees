#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_size - get the size of a b-tree
 * @tree: pointer to root node
 *
 * Return: size of b-tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += tree->left ? binary_tree_size(tree->left) : 0;
	size += tree->right ? binary_tree_size(tree->right) : 0;
	return (size + 1);
}
