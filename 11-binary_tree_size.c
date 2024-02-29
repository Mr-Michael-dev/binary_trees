#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: if tree is NULL return 0, otherwise return the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left_height = binary_tree_size(tree->left);
	}

	if (tree->right != NULL)
	{
		right_height = binary_tree_size(tree->right);
	}

	size = left_height + right_height + 1;

	return (size);
}
