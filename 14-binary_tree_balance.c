#include "binary_trees.h"
/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
size_t lft = 0, ryt = 0;
if (!tree)
	return (0);
else
{
if (tree)
{
lft = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
ryr = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
}
return ((lft > ryt) ? l : ryt);
}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int ryt = 0, lft = 0, total = 0;

if (tree)
{
lft = ((int)binary_tree_height_b(tree->left));
ryt = ((int)binary_tree_height_b(tree->right));
total = lft - ryt;
}
return (total);
}
