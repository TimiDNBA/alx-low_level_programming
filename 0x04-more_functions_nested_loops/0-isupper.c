#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if a code character is uppercase or not.
 * @c: character to be tested
 * Return: 1 whether it is,  0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
