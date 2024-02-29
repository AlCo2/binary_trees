#include "binary_trees.h"
/**
 * binary_tree_preorder - traverse a binary tree (pre-order traversal)
 *
 * @tree: the btree to traverse
 * @func: call each node
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}