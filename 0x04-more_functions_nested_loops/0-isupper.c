#include "main.h"
/**
 * _isupper - Checks for uppercase letter
 * @c: takes an alphabetic character
 *
 * Return: 1 if uppercas if not 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
