#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory data
* @dest: pointer
* @src: pointer to be copied
* @n: times it copies
* Return: return dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
