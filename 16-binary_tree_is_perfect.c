#include "binary_trees.h"

/**
 * binary_tree_height - const binary_tree_t *tree
 * @tree: pointer to the node to measure the height
 * description: function that measures the height of a binary tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lftHeight;
	size_t rtHeight;


	/* If tree is NULL, your function must return 0 */
	if (!tree)
		return (0);

	/* if no child to right or left, return 0 */
	if (!tree->left && !tree->right)
		return (0);

	/* Since the height of the tree is defined as the largest path */
	/* from the root to a leaf, we can recursively compute the height */
	/* of the left and right sub-trees. */

	/* We can apply the definition of the height on the sub-trees now.*/
	lftHeight = binary_tree_height(tree->left);
	rtHeight = binary_tree_height(tree->right);

	/* Find the height of both subtrees and use the larger one */
	/* add 1 to it for the current node */
	if (lftHeight >= rtHeight)
		return (lftHeight + 1);
	return (rtHeight + 1);
}

/**
 * binary_tree_is_perfect - const binary_tree_t *tree
 * @tree: a pointer to the root node of the tree to check
 * description: function that checks if a binary tree is perfect
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int level = 0, depth = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
	{
		depth = level + 1;
		return (depth);
	}

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	if (!tree->left || !tree->right)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
