#include "binary_trees.h"

/**
 * binary_tree_is_root - const binary_tree_t *node
 * @node: root node
 * description: function that checks if a given node is a root
 * Return: return 1 if node is a root. Else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
