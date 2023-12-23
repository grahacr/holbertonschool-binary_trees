#include "binary_trees.h"
/**
 * binary_tree_inorder - go through binary tree with in order traversal
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
}
