#include <stdio.h>
/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "Programming is like building a multilingual puzzle"
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
