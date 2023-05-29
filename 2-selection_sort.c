#include "sort.h"

/**
 * swap_int - Swaps two ints
 * @x: Pointer to the first number
 * @y: Pointer to the second number
 * Return: Void
 */
void swap_int(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}

/**
 * selection_sort - Sort an array in ascending order
 * @array: The array to sort
 * @size: The size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min = 0;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (i != min)
		{
			swap_int(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
