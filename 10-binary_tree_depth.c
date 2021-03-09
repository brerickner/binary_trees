#include "binary_trees.h"

/**
 * binary_tree_depth - const binary_tree_t *tree
 * @tree: pointer to the node to measure the depth
 * description: function that measures the depth of a node in a binary tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	/* If tree is NULL, your function must return 0 */
	if (!tree)
		return (0);

	/* as long as tree has parent move up tree and increase depth */
	for (depth = 0; tree->parent; tree = tree->parent, depth++)
		;

	return (depth);
}
