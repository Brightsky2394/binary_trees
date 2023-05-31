include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: Depth or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth;
depth = 0;
if (!tree || (tree->parent == NULL))
	return (0);
depth = 1 + binary_tree_depth(tree->parent);
return (depth);
}
