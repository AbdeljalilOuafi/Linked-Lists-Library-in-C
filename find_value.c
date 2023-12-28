#include "main.h"

bool is_member(Node *node, int find_value)
{
	if (node == NULL)
	{
		return false;
	}
	else if (node->value == find_value)
	{
		return true;
	}
	else
	{
		return is_member(node->next, find_value);
	}
}
