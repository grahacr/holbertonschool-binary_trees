#include "binary_trees.h"
/**
 * binary_tree_node - create binary tree node
 * @parent: pointer to parent node of new node
 * @value: value stored in new node
 * Return: pointer to new node on success, NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (!temp)
		return (NULL);
	temp->n = value;
	temp->parent = parent;
	temp->left = temp->right = NULL;
	return (temp);
}
