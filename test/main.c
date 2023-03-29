#include <stdio.h>
#include <limits.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Nested switch case statement\n\nWe can use as many switch statement as we want inside a switch statement. Such type of statements is called nested switch case statements. Consider the following example.\n");
	len2 = printf("Nested switch case statement\n\nWe can use as many switch statement as we want inside a swi\
tch statement. Such type of statements is called nested switch case statements. Consider the following example.\n");
	_printf("Length: [%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	return (0);
}
