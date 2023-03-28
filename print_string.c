#include "main.h"
#include <stdio.h>
/**
 * print_string - prints a string
 *
 * @s: string to be printed
 *
 * Return: count of characters in string
 */
int print_string(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		putchar(*s);
		count++;
		s++;
	}

	return (count);
}
