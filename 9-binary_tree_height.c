#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: if tree is NULL return 0, otherwise return the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t max_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}

	max_height = (left_height > right_height) ?
		     left_height : right_height;

	return (max_height);
}
