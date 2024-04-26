#include "sort.h"
/**
 *
 *
 *
 */
void swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
/**
 *
 *
 *
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
