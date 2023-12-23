#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - find uncle of given node
 * @node: pointer to node to find uncle
 * Return: pointer to uncle, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (0);
	else
		return (binary_tree_sibling(node->parent);
}
