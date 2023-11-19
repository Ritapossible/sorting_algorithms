#include "sort.h"
/**
 * swap - This sorts an array of integers in ascending order.
 * @array: The elements to be sorted.
 * @i: The left element.
 * @j: The right element.
 * @size: The size of array.
 */
void swap(int *array, int i, int j, int size)
{
	int aux;

	if (array[i] == array[j])
		return;
	aux = array[i];
	array[i] = array[j];
	array[j] = aux;
	print_array(array, size);
}
/**
 * partition - This sort array partition.
 * @array: The elements to be sorted.
 * @start: The left side.
 * @end: The right side.
 * @size: The size of array.
 * Return: The pivot sorted.
 */
int partition(int *array, int start, int end, int size)
{
	int pivot = array[end];
	int split_idx = start;
	int i;

	for (i = start; i < end; i++)
		if (array[i] < pivot)
			swap(array, split_idx++, i, size);
	swap(array, split_idx, end, size);
	return (split_idx);
}
/**
 * recursive - The quick_sort core.
 * @array: The elements to be sorted.
 * @start: left side.
 * @end: right side.
 * @size: size of array.
 */
void recursive(int *array, int start, int end, int size)
{
	if (start < end)
	{
		int pivot_pos = partition(array, start, end, size);

		recursive(array, start, pivot_pos - 1, size);
		recursive(array, pivot_pos + 1, end, size);
	}
}
/**
 * quick_sort - This sorts an array of integers in ascending order.
 * @array: The elements to be sorted.
 * @size: The size of array.
 */
void quick_sort(int *array, size_t size)
{
	recursive(array, 0, size - 1, size);
}
