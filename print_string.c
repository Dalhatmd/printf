#include "main.h"

/**
 * print_string - prints a string
 * @count: Counter
 * @args: string to be printed
 *
 * Return: count of characters in string
 */
int print_string(va_list args, int count)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	while (*s != '\0')
	{
		_putchar(*s);
		count++;
		s++;
	}

	return (count);
}
