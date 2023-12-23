#include "binary_trees.h"
/**
 * binary_tree_depth - measure depth of node in binary tree
 * @tree: pointer to node to measure depth of
 * Return: depth of node, or 0 if null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
