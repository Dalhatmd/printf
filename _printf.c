#include "main.h"
#include <stdarg.h>

/**
 * _printf - Prints the string pointed by format to stdout
 * @format: The pointer to thestring to print
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	char *str, c;
	int count = 0, n;
	va_list args;

	va_start(args, format);
	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
                                        c = va_arg(args, int);
                                        print_char(c);
                                        count++;
                                        break;
                                case 's':
                                        str = va_arg(args, char *);
                                        print_string(str);
                                        count++;
                                        break;
                                case '%':
                                        print_percent();
                                        count++;
                                        break;
				case 'd':
				case 'i':
					n = va_arg(args, int);
					count = print_int(n, count);
					break;
				default:
					putchar(*format);
					count++;
					break;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
