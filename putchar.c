#include <unistd.h>
/**
 * _putchar - outputs the character c to stdour
 *
 * Return: character to be printed and 1 on success
 * -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
