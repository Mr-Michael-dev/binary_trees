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
	size_t height = 0;
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	rightbinary_tree_height(tree->right);
	height += 1;

	return (height);
}
