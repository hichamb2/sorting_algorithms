#include "sort.h"
/**
 * ptr_swap - funtion swap 2 int
 * @a: 1st int
 * @b: 2nd int
 */
void ptr_swap(listint_t *a, listint_t *b)
{
	int temp;

	temp = a->n;
	*((int *)&a->n) = b->n;
	*((int *)&b->n) = temp;
}
/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: the list that will be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *Atemp, *Btemp *curent;

	Atemp = (*list)->next;
	curent = malloc(sizeof(listint_t));
	curent->next = NULL;
	curent->prev = NULL;

	printf("from list : %d....%d\n", (*list)->n, (*list)->next->n);
	while (Atemp)
	{
		curent->n = Atemp->n;
		Btemp = Atemp->prev;
		while (Btemp->prev && Btemp->n > curent->n)
		{
			Btemp = Btemp->next;
		}
		ptr_swap(Btemp, curent);
		Atemp = Atemp->next;
	}
	printf("from list : %d....%d\n", (*list)->n, (*list)->next->n);
}
