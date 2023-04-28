#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>
/**
 * struct list_s - a singly linked list
 * @len: the string length
 * @str: malloc string allowing space reservation
 * @next: the next node pointer
 * Description: a singly linked list node structure
 */
typedef struct list_s
{
        int len;
        char *str;
        struct list_s *next;
}list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
