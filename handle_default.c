#include "main.h"

/**
 * handle_default - Switch default function
 * @args: Variadic list
 * @count: counter
 *
 * Return: Count or -1 for error
 */
int handle_default(va_list args, int count)
{
	char *s;

	s = va_arg(args, char *);
	if (*s != ' ' || *s != 0)
	{
		_putchar(*(s - 1));
		_putchar(*s);
		count += 2;
		return (count);
	}
	else
		return (-1);
}
