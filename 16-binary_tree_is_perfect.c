#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 if tree is NULL or not perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* Base case: if tree is NULL, it is not perfect */
	if (tree == NULL)
		return (0);

	/* Calculate the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Check if the subtrees are perfect and have the same height */
	if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right) &&
			left_height == right_height)
		return (1);

	return (0);
}
