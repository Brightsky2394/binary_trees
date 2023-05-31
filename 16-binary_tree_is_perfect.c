#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height
 *  of a binary tree
 * @tree: pointer to binary tree
 * Return: size_t count
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t c_left = 0, c_right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	c_left = binary_tree_height(tree->left);
	c_right = binary_tree_height(tree->right);

	if (c_left >= c_right)
		return (c_left + 1);
	else
		return (c_right + 1);
}
/**
 * binary_tree_is_perfect - function that checks if a binary
 *  tree is perfect
 * @tree: pointer to binary tree
 * Return: int 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	else if (binary_tree_height(tree->left) ==
	binary_tree_height(tree->right) &&
	(binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right)))
		return (1);
	else
		return (0);
}
