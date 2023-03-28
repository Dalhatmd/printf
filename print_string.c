#include "main.h"

/**
 * print_string - prints a string
 *
 * @s: string to be printed
 *
 * Return: count of characters in string
 */
int print_string(char *s, int count)
{
	count = 0;
	while (*s != '\0')
	{
		_putchar(*s);
		count++;
		s++;
	}

	return (count);
}
