#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node as the right child of a node
 *
 * @parent: pointer to the node to insert right child in
 * @value: value to put to store in the left child
 *
 * Return: pointer to the created node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;

	if (parent == NULL)
	{
		return (NULL);
	}

	rightnode = malloc(sizeof(binary_tree_t));

	if (rightnode == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		parent->right->parent = rightnode;
		rightnode->n = value;
		rightnode->parent = parent;
		rightnode->right = parent->right;
		rightnode->left = NULL;
		parent->right = rightnode;
	}
	else
	{
		rightnode->n = value;
		rightnode->parent = parent;
		rightnode->left = NULL;
		rightnode->right = NULL;
		parent->right = rightnode;
	}

	return (rightnode);
}
