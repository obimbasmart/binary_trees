#include "binary_trees.h"

/**
 * binary_tree_is_root - check if b-tree node is root
 * @node: pointer to node
 *
 * Return: 1 if pointer is root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (node->parent ? 0 : 1);
}
