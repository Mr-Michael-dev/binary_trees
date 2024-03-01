#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: if tree is NULL return 0, otherwise return the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t balance_factor = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left_height = 1 + binary_tree_balance(tree->left);
	}

	if (tree->right != NULL)
	{
		right_height = 1 + binary_tree_balance(tree->right);
	}

	balance_factor = left_height - right_height;

	return (balance_factor);
}
