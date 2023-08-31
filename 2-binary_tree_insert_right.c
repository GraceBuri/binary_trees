#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node as right child
 * @parent: A pointer to the node to be inserted
 * @value: Value to store in node
 * Return: If parent is null is otherwise pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}
