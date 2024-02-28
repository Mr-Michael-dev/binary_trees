#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node as the left child of another node
 *
 * @parent: pointer to the node to insert left child in
 * @value: value to put to store in the left child
 *
 * Return: pointer to the created node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	if (parent == NULL)
	{
		return(NULL);
	}

	leftnode = malloc(sizeof(binary_tree_t));
	if (leftnode == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		parent->left->parent = leftnode;
		leftnode->n = value;
		leftnode->parent = parent;
		leftnode->left = parent->left;
		leftnode->right = NULL;
		parent->left = leftnode;
	}
	else
	{
		leftnode->n = value;
		leftnode->parent = parent;
		leftnode->left = NULL;
		leftnode->right = NULL;
		parent->left = leftnode;
	}

	return (leftnode);
}
