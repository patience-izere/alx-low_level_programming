#include "search_algos.h"
/**
* binary_search - function
* @array: array to search
* @size: size of array to search
* @value:value to search for
*
* Description: Search for value in array using binary search algo
* Return: Index of value, or -1 if value not present or array is NULL
*/
int binary_search(int *array, size_t size, int value)
{
	size_t index = 0, real_size = (size - 1);
	size_t middle, counter;

	if (array == NULL)
		return (-1);

	if (size < 2)
		return (-1);

	while (index <= real_size)
	{
		middle = ((index + real_size) / 2);
		printf("Searching in array: ");
		for (counter = index; counter < real_size; counter++)
			printf("%d, ", array[counter]);
		printf("%d\n", array[counter]);

		if (array[middle] < value)
		{
			index = (middle + 1);
			if (index > real_size)
				return (-1);
		}
		else if (array[middle] > value)
		{
			real_size = (middle - 1);
			if (index > real_size)
				return (-1);
		}
		else
			return (middle);
	}
	return (-1);


}
