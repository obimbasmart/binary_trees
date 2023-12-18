#include "binary_trees.h"

/**
 * binary_tree_preorder - goes thru a b-tree in preorder
 * @tree: pointer to root node
 * @func: pointer to function used for printing each node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
