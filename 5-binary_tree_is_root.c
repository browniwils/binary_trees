#include "binary_trees.h"

/**
 * binary_tree_is_root - check root node.
 * @node: node to check.
 * Return: 1 if true, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
