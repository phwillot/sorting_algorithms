#include "sort.h"

/**
 * bubble_sort - Sorts an array of integer in ascending
 * order using bubble sort algorithm
 * @array: array of integer
 * @size: size of the array
 *
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	bool sorted;

	if (!*array)
		return;

	while (sorted == false)
	{
		sorted = true;
		while (i < (size - 1))
		{
			if (array[i] > array[i + 1])
			{
				swap_two_value_array(array, i, i + 1);
				print_array(array, size);
				sorted = false;
			}
			i++;
		}
		i = 0;
	}
}

/**
 * swap_two_value_array - Swap two values of an int array
 * @array: array of integer
 * @index1: first index of array to swap
 * @index2: second array of array to swap
 *
 * Return: Void
 */
void swap_two_value_array(int *array, int index1, int index2)
{
	int temp;

	temp = array[index1];
	array[index1] = array[index2];
	array[index2] = temp;
}
