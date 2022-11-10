#include "search_algos.h"
/**
* linear_search - function
* @array: array to search
* @size: size of array
* @value: value to search for
*
* Decription: Searches value in array of integers using Linear search
* Return: -1 is value not present or array is NULL, else rtrn value
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
