#include "main.h"

Node *delete_at_tail(Node *head)
{
	if (head == NULL)
	{
		return NULL;
	}
	if (head->next == NULL)
	{
		free(head);
		return NULL;
	}
	else
	{
		Node *current = head;
		Node *previous = NULL;

		while (current->next != NULL)
		{
			previous = current;
			current = current->next;
		}
		previous->next = NULL;
		free(current);
		return(head);
	}


}
