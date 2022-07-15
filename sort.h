#ifndef sorting_algos
#define sorting_algos

#include <stdio.h>
#include "sort.h"


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/******prototypes*******/
void bubble_sort(int *array, size_t size);

/*prototype of print function*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* prototype for helper function */
void swap(int *a, int *b);

#endif
