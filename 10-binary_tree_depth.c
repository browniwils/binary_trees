#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of binary tree.
 * @tree: tree to calculate depth.
 * Return: tree depth otherwise 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
