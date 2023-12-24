#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int value;
	struct node *next;
}Node;

Node *insert_at_head(Node *head, int new_value);
Node *insert_at_tail(Node *head, int new_value);
void print_list(Node *head);

#endif // !MAIN_H
