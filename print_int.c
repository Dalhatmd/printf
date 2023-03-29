#include "main.h"

/**
 * print_int - Prints an integer of any size
 * @num: Integer to print
 * @count: counter to keep number of digits printed
 *
 * Return: count
 */
int print_int(va_list num, int count)
{
	unsigned int tmp;
	int n = 0, i = 0, x = 0;

	n = va_arg(num, int);
	if (n <= INT_MAX && n >= INT_MIN)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
			n = -n;
		}
		tmp = n;
		while (tmp / 10 > 0)
		{
			tmp /= 10;
			i++;
		}
		tmp = n;
		while (i >= 0)
		{
			for (x = 0; x < i; x++)
				tmp /= 10;
			tmp %= 10;
			_putchar(tmp + '0');
			count++;
			i--;
			tmp = n;
		}
	}
	else
		return (-1);
	return (count);
}
