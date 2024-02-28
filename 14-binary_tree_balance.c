#include "binary_trees.h"

/**
 * binary_tree_height_bf - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of binary tree, 0 if tree is NULL
 */
size_t binary_tree_height_bf(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	left = tree->left ? 1 + binary_tree_height_bf(tree->left) : 1;
	right = tree->right ? 1 + binary_tree_height_bf(tree->right) : 1;

	return ((left > right) ? left : right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: balanced factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (!tree)
		return (0);

	left = ((int) binary_tree_height_bf(tree->left));
	right = ((int) binary_tree_height_bf(tree->right));

	return (left - right);
}
