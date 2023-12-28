#include "main.h"

void replace_matches(Node *node, int find_value, int replace_value)
{
	if (node != NULL)
	{
		if (node->value == find_value)
		{
			node->value = replace_value;
		}

		replace_matches(node->next, find_value, replace_value);
	}

}
