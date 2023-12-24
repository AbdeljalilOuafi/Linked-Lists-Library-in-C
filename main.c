#include "main.h"

/**
 * main - Entry point of the programme
 *
 * Return: 0 on sucess
*/

int main(void)
{
	Node *head_list = NULL;
	head_list = insert_at_head(head_list, 20);
	head_list = insert_at_head(head_list, 40);
	head_list = insert_at_tail(head_list, 50);
	head_list = insert_at_tail(head_list, 60);
	print_list(head_list);
	return (0);
}
