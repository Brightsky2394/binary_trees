#include "binary_trees.h"
/**
 * bst_insert - insert nodes in order to create a BST tree
 * @tree: tree to create with type BST
 * @value: value of node to insert
 * Return: BST tree
 */
bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *current = NULL, *parent = NULL, *node = NULL;
int lr = 0;
if (tree == NULL)
	return (NULL);
current = *tree;
node = binary_tree_node(current, value);
if (!node)
	return (NULL);
else if (!current)
{
*tree = node;
return (node);
}
while (true)
{
parent = current;
if (value < parent->n)
	current = current->left, lr = 0;
else if (value > parent->n)
	current = current->right, lr = 1;
else
	break;
if (!current)
{
if (lr == 0)
	parent->left = node;
else
	parent->right = node;
node->parent = parent;
return (node);
}
}
free(node);
return (NULL);
}
