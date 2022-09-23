#include <string.h>
#include "main.h"

/**
 * _strncpy - for copying purposes
 * @dest: first parameter
 * @src: second parameter
 * @n: 3rd parameter
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)\
{
	strncpy(dest, src, n);
	return (dest);
}
