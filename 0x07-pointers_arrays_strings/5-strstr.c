#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: dest string
 * @needle: source string
 *
 * Return: beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
