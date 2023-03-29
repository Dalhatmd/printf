#include "main.h"
/**
 * print_char - prints a single character
 * @args: Arguments in the printf call
 * @count: Counter
 *
 * Return: 1 (success)
 */
int print_char(va_list args, int count)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	count++;
	return (count);
}
