#include "main.h"
#include <stdlib.h>

/**
* create_array - creating an array
* @size: The size of the array to create
* @c: The character to initialize the array with
* Return: pointer to the created array, otherwise 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
