#ifndef _LIST_H
#define _LIST_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - a struct for building singly linked list nodes
 * @n: data integer
 * @next: pointer to the next node list
 */

typedef struct listint_s

{
	int n;
	struct listint_s *next;
} listint_t;


size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

#endif
