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
 * bubble_sort -  function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array wich will be sorted
 * @size: the size of array
 */
void bubble_sort(int *array, size_t size)
{

	size_t j, i;

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
			}
			else
				continue;
		}
	}
}
