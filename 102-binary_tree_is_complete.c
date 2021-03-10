#include "binary_trees.h"

/**
 * binary_tree_is_still_complete - 
 * @tree: pointer to the root
 * @index: unsigned int
 * @number_nodes: unsigned int
 * Return: 
 */

int binary_tree_is_still_complete(const binary_tree_t *tree, unsigned int index, unsigned int number_nodes)
{
        if (tree == NULL)
                return (0);
        if (index >= number_nodes)
                return (1);
        return (binary_tree_is_complete(tree->left) && binary_tree_is_complete(tree->right));
}


/**
 * countNodes - counts the number of nodes
 * @tree: pointer to the root
 * Return: count
 */

int countNodes(binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + countNodes(tree->left) + countNodes(tree->right));
}

/**
 * binary_tree_is_complete - a function that checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: if tree is complete or not
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	unsigned int index = 0, number_nodes = 0;

	if (tree == NULL)
		return (0);
	if (index >= number_nodes)
		return (1);
	return (binary_tree_is_complete(tree->left) && binary_tree_is_complete(tree->right));
}
