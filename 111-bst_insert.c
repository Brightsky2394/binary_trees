#include "binary_trees.h"
/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 * Return: pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *new, *temp;

if (tree == NULL || *tree == NULL)
{
new = binary_tree_node(NULL, value);
*tree = new;
return (new);
}
temp = *tree;
while (temp != NULL)
{
if (temp->n == value)
	return (NULL);
if (temp->n > value)
{
if (temp->left == NULL)
{
temp->left = binary_tree_node(temp, value);
return (temp->left);
}
temp = temp->left;
}
if (temp->n < value)
{
if (temp->right == NULL)
{
temp->right = binary_tree_node(temp, value);
return (temp->right);
}
temp = temp->right;
}
}
return (NULL);
}
