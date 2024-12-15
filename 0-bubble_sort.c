#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of intergers in ascending order using bubble
 *
 * @array: array to be sorted
 * @size: The size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j; /* Loop counters */
	int temp; /* Temporary variable for swapping */
	int swapped; /* Flag to check if a swap occured */

	/* If array is NULL or contains 1 or less elements, no sorting is needed */
	if (size < 2)
		return;

	/* Tracks the number of passes through the array */
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; /* Resets the swapped flag at the start of each pass */

		for (j = 0; j < size - i - 1; j++) /* Avoid already sorted elements */
		{
			/* If the current element is greater than the next, swap them */
			if (array[j] > array[j + 1])
			{
				/* swap elements */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* Print the array after each swap */
				print_array(array, size);

				/* Mark that a swap occured */
				swapped = 1;
			}
		}

		/* If no swaps occured during this pass, the array is already sorted */
		if (!swapped)
			break;
	}
}
