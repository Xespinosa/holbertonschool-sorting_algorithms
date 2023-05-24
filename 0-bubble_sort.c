#include "sort.h"

/**
 * bubble_sort - sort array using bubble method
 * @array: numbers to be sorted
 * @size: size of array
 * Return: Null on success
 */

void bubble_sort(int *array, size_t size)
{
	size_t n = 0, temp;

	if (array == NULL || size < 2)
		return;

	while (n <= size - 1)
	{
		if (array[n] > array[n+1])
		{
			temp = array[n];
			array[n] = array[n+1];
			array[n+1] = temp;
			print_array(array,size);
			bubble_sort(array, size);
		}
		n++;
	}
}
