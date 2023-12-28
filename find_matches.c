#include "main.h"

int find_matches(Node *node, int value)
{
	if (node == NULL)
	{
		return 0;
	}
	else if (node->value == value)
	{
		return 1 + find_matches(node->next, value);
	}
	else
	{
		return find_matches(node->next, value);
	}
}
