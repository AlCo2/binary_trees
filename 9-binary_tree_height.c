#include "binary_trees.h"
/**
 * binary_tree_height - function to get the height of a btree
 *
 * @tree: the btree
 *
 * Return: the size of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (height);
	if (tree->left)
		height += 1;
	if (tree->right)
		height += 1;
	return (height);
}
