#include "sort.h"

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_rec(array, 0, size - 1, size);
}

void quick_sort_rec(int *array, int lower, int higher, size_t size)
{
	int l_p = 0;

	if (lower < higher)
	{
		l_p = hoare_partition(array, lower, higher, size);
		quick_sort_rec(array, lower, l_p, size);
		quick_sort_rec(array, l_p + 1, higher, size);
	}
}

int hoare_partition(int *array, int lower, int higher, size_t size)
{
	int pivot = array[lower];
	int i = lower - 1;
	int j = higher + 1;
	int aux;

	while (1)
	{
		do
		{
			i++;
		} while (array[i] < pivot);

		do
		{
			j--;
		} while (array[j] > pivot);

		if (i >= j)
			return j;

		aux = array[i];
		array[i] = array[j];
		array[j] = aux;

		if (aux != array[i])
			print_array(array, size);
	}
}

