#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with at least 1 child in binary tree
 * @tree: pointer to root node of tree to count nodes
 * Return: number of nodes, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	else
		return (0);
}
