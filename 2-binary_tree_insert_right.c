#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node as right child of parent
 * @parent: pointer to node to insert right child in
 * @value: value stored in new node
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL || parent == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = new->right = NULL;
	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;
	return (new);
}
