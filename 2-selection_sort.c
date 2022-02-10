#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in
 * ascending order using the selction sort algorithm
 * @array: array of integers
 * @size: size of the array
 *
 * Return: Void
 */

void selection_sort(int *array, size_t size)
{
	int i = 0, y, temp_min, min_index;
	bool sorted = false;

	if (!*array)
		return;

	while (sorted == false)
	{
		temp_min = array[i];
		sorted = true, i++, y = i;
		while (array[y] && y < (int)size)
		{
			if (array[y] < temp_min)
			{
				temp_min = array[y];
				min_index = y, sorted = false;
			}
			y++;
		}
		if (sorted == false)
		{
			swap_two_value_array(array, i - 1, min_index);
			print_array(array, size);
		}
		else if (i != (int)size)
			sorted = false;
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
