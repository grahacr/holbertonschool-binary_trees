#include "binary_trees.h"
#include "11-binary_tree_size.c"
/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: pointer to root node of tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_s = 0, right_s = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_s = binary_tree_size(tree->left);
	if (tree->right != NULL)
		right_s = binary_tree_size(tree->right);
	if (left_s != right_s)
		return (0);
	return (1);
}
