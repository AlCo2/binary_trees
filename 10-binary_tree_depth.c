#include "binary_trees.h"
/**
 * binary_tree_depth - get the depth of btree
 *
 * @tree: the btree
 *
 * Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	depth = tree->parent ? binary_tree_depth(tree->parent) + 1 : 0;
	return (depth);
}
