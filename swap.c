#include <stdio.h>
#include "sort.h"

/**
 * swap - Swaps the two values
 * 
 * @a: First value
 * @b: Second value
 * Return: 0
 * 
 */
void swap(int *a, int *b)
{
    int temp;

    temp = *b;
    *b = *a;
    *a = temp;
}
