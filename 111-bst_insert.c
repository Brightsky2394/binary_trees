#include "binary_trees.h"
/**
 * bst_insert - insert nodes in order to create a BST tree
 * @tree: tree to create with type BST
 * @value: value of node to insert
 * Return: BST tree
 */
bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *new, *trv;
binary_tree_t *aux;
if (!tree)
	return (NULL);
if (*tree == NULL)
{
aux = binary_tree_node((binary_tree_t *)(*tree), value);
new = (bst_t *)aux;
*tree = new;
}
else
{
trv = *tree;
if (value < trv->n)
{
if (trv->left)
	new = bst_insert(&trv->left, value);
else
{
aux = binary_tree_node((binary_tree_t *)trv, value);
new = trv->left = (bst_t *)aux;
}
}
else if (value > trv->n)
{
if (trv->right)
	new = bst_insert(&trv->right, value);
else
{
aux = binary_tree_node((binary_tree_t *)trv, value);
new = trv->right = aux;
}
}
return (NULL);
}
return (new);
}
