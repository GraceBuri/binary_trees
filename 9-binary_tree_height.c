#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: Height else return 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i, j;

	if (tree)
	{
		i = 0;
		j = 0;

		i = tree->left
