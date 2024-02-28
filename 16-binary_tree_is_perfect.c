#include "binary_trees.h"

/**
 * is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if it is not perfect, otherwise a pair number
 */
int is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree->left && !tree->right)
		return (1);
	else if (tree->left && tree->right)
	{
		left = 1 + is_perfect(tree->left);
		right = 1 + is_perfect(tree->right);
		if (right == left && right != 0 && left != 0)
			return (right);
	}

	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if it is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_perfect(tree->right) != 0 ? 1 : 0);
}
