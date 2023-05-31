#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to binary tree
 * Return: size_t sum
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0, lft = 0, ryt = 0;
if (!tree)
	return (0);
else
{
lft = binary_tree_size(tree->left);
ryt = binary_tree_size(tree->right);
size = lft + ryt + 1;
}
return (size);
}
