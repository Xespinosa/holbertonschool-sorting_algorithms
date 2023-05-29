#include "sort.h"
/**
 * partition - partition scheme
 * @array: array to sort
 * @min: lower index
 * @max: higher index
 * @size: array's size
 * Return: index of pivot
 */
int partition(int *array, int min, int max, size_t size)
{
	int i = min - 1, j = min;
	int pivot = array[max], temp = 0;

	for (; j < max; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[max])
	{
		temp = array[i + 1];
		array[i + 1] = array[max];
		array[max] = temp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * sort_array - sort using Quick sort algorithm
 * @array: array to sort
 * @min: lower index
 * @max: higher index
 * @size: array's size
 * Return: Void
 */
void sort_array(int *array, int min, int max, size_t size)
{
	int pivot;

	if (min < max)
	{
		pivot = partition(array, min, max, size);
		sort_array(array, min, pivot - 1, size);
		sort_array(array, pivot + 1, max, size);
	}
}
/**
 * quick_sort - function that sorts an array of integers
 *              in ascending order using the Quick sort algorithm
 * @array: array
 * @size: array's size
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	sort_array(array, 0, size - 1, size);
}
