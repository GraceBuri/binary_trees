#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node at lft child
 * @parent: pointer to node to insert
 * @value: value to store in node
 * Return: If parent is null return null else a pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
