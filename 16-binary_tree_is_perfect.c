#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if it is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else if (tree->left && tree->right)
	{
		left = 1 + binary_tree_is_perfect(tree->left);
		right = 1 + binary_tree_is_perfect(tree->right);
		if (right == left && right != 0 && left != 0)
			return (1);
	}

	return (0);
}
