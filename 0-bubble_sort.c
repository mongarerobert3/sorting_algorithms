#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order 
 * using the Bubble sort algorithm
 * 
 * @array - list of integers  
 * @size  - size of the array
 * Return: 0
 */

void bubble_sort(int *array, size_t size)
{
    unsigned int i, j;

    if (!array)
    return;

    for (i = 0; i < size -1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                print_array(array, size);
            }
        }
    }
}
