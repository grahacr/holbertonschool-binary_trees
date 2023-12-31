#include "binary_trees.h"
/**
 * binary_tree_size - measure size of binary tree
 * @tree: pointer to root node of tree to measure
 * Return: size of tree, 0 if null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	return (left + right + 1);
}
