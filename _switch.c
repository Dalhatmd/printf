#include "main.h"

/**
 * _switch - Switch function to check for specifiers
 * @str: pointer to string
 * @args: Arguments passed into function
 *
 * Return: Counter
 */
int _switch(const char *str, va_list args)
{
	int count = 0;
	unsigned int num;

	switch (*str)
	{
		case 'c':
			/* c = va_arg(args, int); */
			count = print_char(args, count);
			break;
		case 's':
			/* s = va_arg(args, char *); */
			count = print_string(args, count);
			break;
		case '%':
			count += print_percent();
			break;
		case 'd':
		case 'i':
			/* n = va_arg(args, int); */
			/* count += print_digits(args); */
			count = print_int(args, count);
			break;
		case 'b':
			num = va_arg(args, unsigned int);
			count += print_binary(num);
			break;
		default:
			count += handle_default(str);
			break;
	}

	return (count);
}
