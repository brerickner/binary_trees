#include "binary_trees.h"

/**
 * binary_tree_node - binary_tree_t *parent, int value
 * @parent: root node
 * @value: value contained in node
 * description: function that creates a binary tree node
 * Return: Pointer to new node. Else NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	/* malloc check */
	if (newNode == NULL)
		return (NULL);

/* create the new node with goodies */
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	/* stuff that made us seg fault */
	/*if (parent == NULL)*/
	/*parent->n = value;*/

	/*if (newNode->n < parent->n)*/
		/*parent->left = newNode;*/

	/*if (newNode->n > parent->n)*/
		/*parent->right = newNode; */
	return (newNode);
}
