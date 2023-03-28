#include "main.h"

/**
 * print_int - Prints an integer of any size
 * @n: Integer to print
 * @count: counter to keep number of digits printed
 *
 * Return: count
 */
int print_int(int n, int count)
{
	if (n < 0)
	{
		putchar('-');
		count++;
		n = -n;
	}
	if (n / 10)
	{
		count++;
		print_int((n / 10), count);
	}
	putchar((n % 10) + '0');
	count++;

	return (count);
}
