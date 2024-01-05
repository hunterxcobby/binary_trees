#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* Base case: if tree is NULL, return 0 */
	if (tree == NULL)
	{
		return (0);
	}

	/* Recursive case: calculate the height of left and right subtrees */
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	/**
     * Return the maximum height of left and right subtrees,
     *plus 1 for the current node
     */
	return ((left_height > right_height ? left_height : right_height) + 1);
}
