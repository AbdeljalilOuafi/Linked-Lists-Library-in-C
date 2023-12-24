#include "main.h"

Node *insert_at_head(Node *head, int new_value)
{
	{
    Node *new_node = calloc(1, sizeof(Node));
    new_node->value = new_value;
    new_node->next = head;
    return new_node;
	}
}
