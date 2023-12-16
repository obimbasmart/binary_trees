#include "binary_trees.h"

/**
 * binary_tree_node - create a new binary tree
 * @parent: parent node for the new node
 * @value: value for the new node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	(void)parent;

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
