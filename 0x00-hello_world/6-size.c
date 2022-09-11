#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints the size of various types it is compiled and run on
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	float f;
	long l;
	long long li;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	printf("Size of a long: %ld byte(s)\n", sizeof(l));
	printf("Size of a long long: %ld byte(s)\n", sizeof(li));
	return (0);
}
