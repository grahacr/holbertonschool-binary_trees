#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measure balance factor of binary tree
 * @tree: pointer to root node of tree to measure
 * Return: balance factor on success, 0 if null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_h = (int)binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_h = (int)binary_tree_height(tree->right) + 1;
	return (left_h - right_h);
}
