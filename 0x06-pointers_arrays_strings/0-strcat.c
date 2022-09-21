#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: string that will append
 * @src: string to be concatenated upon
 *
 * Return: dust
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dust);
}
