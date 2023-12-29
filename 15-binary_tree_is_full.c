#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_full - get the size of a b-tree
 * @tree: pointer to root node
 *
 * Return: size of b-tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);

	if (!tree->left && !tree->right)
		return (1);


	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
