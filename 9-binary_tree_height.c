#include "binary_trees.h"
/**
 * binary_tree_height - measure height of binary tree
 * @tree: pointer to root node of tree to measure
 * Return: height on success, 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return(0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left > right) ? (left + 1) : (right + 1);
}
