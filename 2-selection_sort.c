#include "sort.h"

/**
 * selection_sort - a function sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, *curr, *min;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		curr = (array + i);
		min = (array + i);
	for (j = i + 1; j < size; j++)
	{
		if (*(array + j) < *min)
			min = (array + j);
	}

	if (min != curr)
	{
		temp = *curr;
		*curr = *min;
		*min = temp;
		print_array(array, size);
	}
	}
}	
