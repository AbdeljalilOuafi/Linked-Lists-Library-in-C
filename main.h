#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
	int value;
	struct node *next;
}Node;

/*printing*/
void print_list(Node *head);
unsigned int print_length(Node *head);
unsigned int recursion_length(Node *node);

/*insertion*/
Node *insert_at_head(Node *head, int new_value);
Node *insert_at_tail(Node *head, int new_value);

/*deletion*/
Node *delete_at_head(Node *head);
Node *delete_at_tail(Node *head);

/* Searching/Other */

bool is_member(Node *node, int find_value);
int find_matches(Node *node, int value);
void replace_matches(Node *head, int find_value, int replace_value);

#endif // !MAIN_H
