#include "main.h"
/**
 * print_length - prints the amount of nodes in
 * a linked list using the array index method
 * @node: first node to be checked (most cases its the head)
 * Return: number of nodes
*/
unsigned int print_len(Node *node)
{
	unsigned int length = 0;

	Node *current = node;
	while (current != NULL)
	{
		current = current->next;
		length++;
	}
	return (length);
}

/**
 * recursion_length - prints the amount of nodes
 * in a linked list using recursion
 * @node: the first node to be checked
 * Return: number of nodes
*/

unsigned int print_recursion_len(Node *node)
{
	if (node == NULL)
	{
		return 0;
	}
	else
	{
		return 1 + recursion_length(node->next);
	}
}
