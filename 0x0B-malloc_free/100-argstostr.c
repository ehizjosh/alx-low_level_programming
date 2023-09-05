#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all program arguments into a single string
* @ac: the number of arguements
* @av: an array of argument strings
* Return: Pointer to the concatenated string, otherwise 0
*/
char *argstostr(int ac, char **av)
{
	int i, j;
	int total_len = 0;
	char *res = (char *)malloc((total_len + 1) * sizeof(char));
	int position = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_len++;
			j++;
		}
		total_len++;
	}
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			res[position] = av[i][j];
			position++;
			j++;
		}
		res[position] = '\n';
		position++;
	}
	res[position] = '\0';
	return (res);
}
