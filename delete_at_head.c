#include "main.h"

Node *delete_at_head(Node *head)
{
	if (head == NULL)
	{
		return NULL;
	}

	Node *current = head->next;
	free(head);
	return (current);
}
