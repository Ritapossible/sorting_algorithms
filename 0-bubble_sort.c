#include "sort.h"

/**
 * bubble_sort - This sorts an array of integers in ascending order using the
 * Bubble sort algorithm.
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Return: Always return void.
 */
void bubble_sort(int *array, size_t size)
	{
		size_t j, n, new_n;
		int swap;

		if (array == NULL || size < 2)
			return;

		n = size;
		while (n > 0)
		{
			new_n = 0;
			for (j = 0; j < n - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap = array[j];
					array[j] = array[j + 1];
					array[j + 1] = swap;
					new_n = j + 1;
					print_array(array, size);
				}
			}
			n = new_n;
		}
	}
