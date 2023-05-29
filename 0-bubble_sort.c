#include "sort.h"

/**
 * bubble_sort - sort array using bubble method
 * @array: numbers to be sorted
 * @size: size of array
 * Return: Null on success
 */

void bubble_sort(int *array, size_t size)
{
	size_t n = 0, x = 0;
	int temp = 0;

	if (array == NULL || size == 0)
		return;

	for (; n < size - 1; n++)
	{
		for (; x < size - 1; x++)
		{
			if (array[x] > array[x + 1])
			{
				temp = array[x + 1];
				array[x + 1] = array[x];
				array[x] = temp;
				print_array(array, size);
			}
		}
	}
}
