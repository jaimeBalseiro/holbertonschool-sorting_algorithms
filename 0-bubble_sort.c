#include "sort.h"

/**
 * bubble_sort - sort an int array with bubble_sort
 * @array: array of integers of size
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	if (!(array && size))
		return;

	for (i = 0; i < size;)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
	}
}
