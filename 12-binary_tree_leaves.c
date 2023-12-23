#include "binary_trees.h"
/**
 * binary_tree_leaves - count leaves in binary tree
 * @tree: pointer to root node of tree to count leaves of
 * Return: number of leaves, otherwise 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftleaves = 0;
	size_t rightleaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leftleaves = binary_tree_leaves(tree->left);
	rightleaves = binary_tree_leaves(tree->right);

	return (leftleaves + rightleaves);
}
