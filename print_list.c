#include "main.h"

void print_list(Node *head)
{
	Node *current = head;
	unsigned int i = 1;
	while (current != NULL)
	{
		printf("Node %d : %d\n", i, current->value);
		current = current->next;
		i++;
	}
}
