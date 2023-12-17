#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a new node at the left of a parent node
 * @parent: parent node for the new node
 * @value: value for the new node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	/* create new node */
	new_node = binary_tree_node(parent, value);

	if (parent->left)
		parent->left->parent = new_node, new_node->left = parent->left;

	parent->left = new_node;
	return (new_node);
}
