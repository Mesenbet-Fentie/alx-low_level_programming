#include "main.h"

/**
 * _strlen_recursion - Prints the length of string
 * @s: The string to be counted
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
