#include "main.h"

unsigned int print_length(Node *head)
{
	unsigned int length = 0;

	Node *current = head;
	while (current != NULL)
	{
		current = current->next;
		length++;
	}
	return (length);
}

unsigned int recursion_length(Node *node)
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
