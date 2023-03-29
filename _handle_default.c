#include "main.h"

/**
 * handle_default - Switch default function
 * @s: pointer to string
 * @count: counter
 *
 * Return: Count or -1 for error
 */
int handle_default(const char *s, int count)
{
	if (*s != ' ' && *s != '\0')
	{
		_putchar(*(s - 1));
		_putchar(*s);
		count += 2;
		return (count);
	}
	else
		return (count);
}
