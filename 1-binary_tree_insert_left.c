#include "binary_trees.h"

/**
 * binary_tree_insert_left - binary_tree_t *parent, int value
 * @parent: root node
 * @value: value contained in node
 * description: function that inserts a node as the left-child of another node
 * Return: Pointer to new node. Else NULL if fails or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	/* return null if parent is null per requirements */
	if (!parent)
		return (NULL);

	/* assign goodies for newNode */
	newNode = binary_tree_node(parent, value);

	/* If parent already has a left-child, the new node must take */
	/* its place, and the old left-child must be set as the left-child */
	/* of the new node.*/
	if (!parent->left)
	{
		parent->left = newNode;
		return (newNode);
	}
	/* when parent has a left child, make it the child of newnode instead*/
	newNode->parent = parent;
	newNode->left = parent->left;
	parent->left = newNode;
	newNode->left->parent = newNode;
	return (newNode);
}
