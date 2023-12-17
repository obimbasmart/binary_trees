#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a new node at the right of a parent node
 * @parent: parent node for the new node
 * @value: value for the new node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	/* create new node */
	new_node = binary_tree_node(parent, value);

	if (parent->right)
		parent->right->parent = new_node, new_node->right = parent->right;

	parent->right = new_node;
	return (new_node);
}
