#include "binary_trees.h"
/**
 * binary_tree_depth - Measeure depth binary tree node
 * @tree: A point to node to measure
 * Return: If tree is null function returns 0 else depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}
