#include "sort.h"
/**
 * selection_sort - sorts with the selection sort algorithm
 * @array: the array to be sorted
 * @size: size of the array
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, temp, init_pos;

	if (!array || size < 2)
	
	for (i = 0; i < size - 1; i++)
	{
		init_pos = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[init_pos])
				init_pos = j;
		}
		if (init_pos != i)
		{
			temp = array[i];
			array[i] = array[init_pos];
			array[init_pos] = temp;
			print_array(array, size);
		}
		
	}
	
}
