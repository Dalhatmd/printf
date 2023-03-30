#include "main.h"

/**
 * handle_default - Switch default function
 * @s: Pointer ot string
 *
 * Return: Count or -1 for error
 */
int handle_default(const char *s)
{
	int count = 0;

	if (*s != ' ')
	{
		if (*s != '\0')
		{
			_putchar(*(s - 1));
			_putchar(*s);
			count += 2;
			return (count);
		}
		else
			return (count);
	}

	return (count);
}
