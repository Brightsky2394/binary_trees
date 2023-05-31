#include "binary_trees.h"
/**
 * bst_insert - insert nodes in order to create a BST tree
 * @tree: tree to create with type BST
 * @value: value of node to insert
 * Return: BST tree
 */
bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *new, *temp;
binary_tree_t *trv;
if (!tree)
	return (NULL);
else if (*tree == NULL)
{
trv = binary_tree_node((binary_tree_t *)(*tree), value);
new = (bst_t *)trv;
*tree = new;
}
else
{
temp = *tree;
if (value < temp->n)
{
if (temp->left)
	new = bst_insert(&temp->left, value);
else
{
trv = binary_tree_node((binary_tree_t *)temp, value);
new = temp->left = (bst_t *)trv;
}
}
else if (value > temp->n)
{
if (temp->right)
	new = bst_insert(&temp->right, value);
else
{
trv = binary_tree_node((binary_tree_t *)temp, value);
new = temp->right = trv;
}
}
return (NULL);
}
return (new);
}
