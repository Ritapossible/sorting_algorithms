#include "sort.h"
/**
 * selection_sort - This sorts an array of integer in ascending order.
 * @array: The element to be sorted.
 * @size: The size of an array.
 */
void selection_sort(int *array, size_t size)
{
	unsigned int m, n;

	if (size < 2)
		return;

	for (m = 0; m < size; m++)
	{
		unsigned int x = m;
		int aux = array[m];

		for (n = m + 1; n < size; n++)
		{
			if (array[n] < aux)
				aux = array[n], x = n;
		}
		if (x != m)
		{
			array[x] = array[m];
			array[m] = aux;
			print_array(array, size);
		}
	}
}
