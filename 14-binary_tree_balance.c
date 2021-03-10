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
		return (-1);

	/* if no child to right or left, return 0 */
	if (!tree->left && !tree->right)
		return (0);

	/* Since the height of the tree is defined as the largest path */
	/* from the root to a leaf, we can recursively compute the height */
	/* of the left and right sub-trees. */

	/* We can apply the definition of the height on the sub-trees now.*/
	lftHeight = binary_tree_height(tree->left) + 1;
	rtHeight = binary_tree_height(tree->right) + 1;

	/* Find the height of both subtrees and use the larger one */
	/* add 1 to it for the current node */
	if (lftHeight > rtHeight)
		return (lftHeight);
	return (rtHeight);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftheight, rightheight;

	leftheight = binary_tree_height(tree->left);
	rightheight = binary_tree_height(tree->right);
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (leftheight - rightheight);
}
