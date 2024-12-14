#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Interger stoered in the node
 * @prev: pointer to the previos element of the list
 * @next: pointer to the next element of the list
 */

/* Doubly linked list structure */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

/* Prototypes */
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif /* SORT_H */
