#include "binary_trees.h"

/**
 * binary_tree_postorder - goes thru a b-tree in postorder
 * @tree: pointer to root node
 * @func: pointer to function used for printing each node
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
