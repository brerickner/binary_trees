#include "binary_trees.h"

/**
 * binary_tree_insert_right - binary_tree_t *parent, int value
 * @parent: root node
 * @value: value contained in node
 * description: function that inserts a node as the right-child of another node
 * Return: Pointer to new node. Else NULL if fails or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	/* return null if parent is null per requirements */
	if (!parent)
		return (NULL);

	/* assign goodies for newNode */
	newNode = binary_tree_node(parent, value);

	/* If parent already has a right-child, the new node must take */
	/* its place, and the old right-child must be set as the right-child */
	/* of the new node.*/
	if (!parent->right)
	{
		parent->right = newNode;
		return (newNode);
	}
	/* when parent has a right child, make it the child of newnode instead*/
	newNode->parent = parent;
	newNode->right = parent->right;
	parent->right = newNode;
	newNode->right->parent = newNode;
	return (newNode);
}
