#include "binary_trees.h"
/**
 * binary_tree_balance - measures balanc factor
 * @tree: pointer to root node
 * Return: return 0 if tree is null else balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_height- measures binary height
 * @tree: pointer to the root node
 * Return: 0 if tree is NUll else return height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t i = 0, j = 0;

		i = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		j = tree->right ? 1 + binary_tree_height(tree->right)
: 1;
		return ((i > j) ? i : j);
	}
	return (0);
}
