#include "binary_trees.h"

/**
 * binary_tree_sibling - binary_tree_t *node
 * @node: is a pointer to the node to find the sibling
 * description: function that finds the sibling of a node
 * Return: if node is NULL or the parent is NULL, or no siblings return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}
