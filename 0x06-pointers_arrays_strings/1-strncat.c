#include <string.h>
#include "main.h"

/**
 * _strncat - prints a function append some charx
 * @dest: first parameter
 * @src: second parameter
 * @n: 3rd parameter
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
