#include "sort.h"
/**
 * bubble_sort - Sort an array with buble sort algorithm
 * @array: Array that going to be sorted
 * @size: Size of array
 * Return: Nothing, just sort and print when swap
 */
void bubble_sort(int *array, size_t size)
{
    /* tmp is for swap */
    int tmp, flag; /*flag is used to check if sorted */
    size_t i, j;

    if (array == NULL || size < 2) /* array does not need to be sorted if size is less than 2 */
        return;

    for (i = 0; i < size; i++)
    {
        flag = 0;
        for (j = 0; j < size - 1; j++) 
        {
            if (array[j] > array[j + 1]) /* compares integers of the array */
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                print_array(array, size);
                flag = 1; /* tells swap has been made */
            }
        }
        if (flag == 0)
            return;
    }
}
