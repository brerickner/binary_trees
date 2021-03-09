#include "binary_trees.h"
/**
 * binary_tree_uncle - binary_tree_t *node
 * @node: is a pointer to the node to find the uncle
 * description: function that finds the uncle of a node
 * Return: if node is NULL or has no uncle return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent || !node->parent->parent)
		return (NULL);
	if (!node->parent->parent->left && !node->parent->parent->right)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else
		return (NULL);
}
