#include "sort.h"
/**
 *  swap - function that swap 2 ints
 *  @a: 1st int
 *  @b: 2nd int
 */
void swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
/**
 * selection_sort -  function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array wich will be sorted
 * @size: the size of array
 */
void selection_sort(int *array, size_t size)
{
	int min;
	size_t i, j;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
				swap(&array[j], &min);
		}
		swap(&array[i], &min);
		print_array(array, size);
	}
}
