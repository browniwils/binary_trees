#include "binary_trees.h"

/**
 * binary_tree_leaves - count leaves in binary tree.
 * @tree: tree to count leaves.
 * Return: number of leafs otherwise 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n_leafs = 0;

	if (tree)
	{
		n_leafs += (!tree->left && !tree->right) ? 1 : 0;
		n_leafs += binary_tree_leaves(tree->left);
		n_leafs += binary_tree_leaves(tree->right);
	}

	return (n_leafs);
}
