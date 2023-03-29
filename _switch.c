#include "main.h"

/**
 * _switch - Switch function to check for specifiers
 * @str: pointer to string
 * @args: Arguments passed into function
 * @count: Counter for printed characters
 *
 * Return: Counter
 */
int _switch(const char *str, va_list args, int count)
{
	int n __attribute__((unused));
	char c, *s;
	unsigned int num;

	switch (*str)
	{
		case 'c':
			c = va_arg(args, int);
			count += print_char(c, count);
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(null)";
			count += print_string(s, count);
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
			count = handle_default(str, count);
			break;
	}

	return (count);
}
