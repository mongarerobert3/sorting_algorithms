#ifndef sorting_algos
#define sorting_algos

#include <stdio.h>
#include <stdlib.h>


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
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void _swap(listint_t **list, listint_t **node1, listint_t *node2);
<<<<<<< HEAD
void swap(int *a, int *b);
=======
void _swap(int *a, int *b);
>>>>>>> 4fc6b469c771a9021e9288698b5b8e4e33a5af6d

/*
prototype of print function
*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);


#endif
