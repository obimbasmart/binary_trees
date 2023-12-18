#include "binary_trees.h"

/**
 * binary_tree_depth - get depth of a node in a b-tree
 * @tree: pointer to root node
 *
 * Return: depth of node in b-tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth;

	if (!tree || !tree->parent)
		return (0);

	tree_depth = 1 + binary_tree_depth(tree->parent);
	return (tree_depth);
}
