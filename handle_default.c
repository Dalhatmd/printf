#include "main.h"

/**
 * handle_default - Switch default function
 * @s: Pointer ot string
 * @count: counter
 *
 * Return: Count or -1 for error
 */
int handle_default(const char *s, int count)
{
	printf("S in handle default: %s\n", s);
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
			return (-1);
	}
	else
		return(-1);
}
