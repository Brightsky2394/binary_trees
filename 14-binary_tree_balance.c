#include "binary_trees.h"
/**
 * binary_tree_height - function that measures
 *  the height of a binary tree
 * @tree: pointer to binary tree
 * Return: size_t height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t lft = 0, ryt = 0;
if (tree == NULL)
	return (0);
lft = binary_tree_height(tree->left);
ryt = binary_tree_height(tree->right);
if (lft >= ryt)
	return (lft++);
else
	return (ryt++);
}

/**
 * binary_tree_balance - function that measures
 * the balance factor of a binary tree
 * @tree: pointer to binary tree
 * Return: count balance int
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int lft = 0, ryt = 0;
if (tree == NULL)
	return (0);
lft = binary_tree_height(tree->left);
ryt = binary_tree_height(tree->right);
return (lft - ryt);
}
