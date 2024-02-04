#include "main.h"

/**
 * main - Entry point of the programme
 *
 * Return: 0 on sucess
*/

int main(void)
{
	Node *head_list = NULL;
	head_list = insert_at_head(head_list, 10);
	head_list = insert_at_tail(head_list, 20);
	head_list = insert_at_tail(head_list, 30);
	head_list = insert_at_tail(head_list, 40);
	head_list = insert_at_tail(head_list, 50);
	head_list = insert_at_tail(head_list, 50);
	head_list = insert_at_tail(head_list, 50);
	head_list = insert_at_tail(head_list, 50);
	head_list = insert_at_tail(head_list, 50);
	head_list = insert_at_tail(head_list, 20);
	printf("Before Replacement : \n\n");
	print_list(head_list);
	replace_matches(head_list,50, 2);
	printf("\nAfter Replacement : \n\n");
	print_list(head_list);
	return 0;

}
