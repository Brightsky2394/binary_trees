#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the
 *  leaves in a binary tree
 * @tree: pointer to binary tree
 * Return: size_t sum
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves = 0;

if (tree == NULL)
	return (0);
else if (!(tree->left) && !(tree->right))
	return (1);
leaves += binary_tree_leaves(tree->left);
leaves += binary_tree_leaves(tree->right);
return (leaves);
}
