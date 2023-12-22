#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node as left child of other node
 * @parent: pointer to node to insert left child in
 * @value: value stored in new node
 * Return: pointer to new node on success, NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if(new == NULL || parent == NULL)
		return(NULL);
	new->n = value;
	new->left = new->right = NULL;
	if(parent->left != NULL)
	{
		new->left = parent->left;
	}
	parent->left=new;
	return(new);
}
