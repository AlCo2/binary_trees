#include "binary_trees.h"
/*
 * binary_tree_node - function to create node for binary tree
 *
 * @parent: the root node
 * @value: value asigned to node
 *
 * Return: the node created
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	(void)parent;
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
