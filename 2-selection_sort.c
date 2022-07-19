#include "sort.h"
/**
 * swap_ - swap two numbers
 * @a: integer
 * @b: integer
 **/
void swap_(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * selection_sort - sort array using selection sort algorithm
 * @array: array
 * @size: array size
 **/

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < (size - 1); i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			swap_(&array[i], &array[min]);
			print_array(array, size);
		}
	}

}
