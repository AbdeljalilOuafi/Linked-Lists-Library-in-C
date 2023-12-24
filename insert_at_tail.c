#include "main.h"

Node *insert_at_tail(Node *head, int new_value)
{
	Node *new_node = calloc(1, sizeof(Node));
	new_node->value = new_value;

	Node *current = head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	if (current->next == NULL)
	{
		current->next = new_node;
		new_node->next = NULL;
		return (head);
	}


}
