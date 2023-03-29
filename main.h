#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int _putchar(char);
int _printf(const char *format, ...);
int print_string(char *s, int count);
int print_char(char c, int count);
int print_percent(void);
int _switch(const char *, va_list, int);
int print_digits(va_list list);
int print_binary(unsigned int num);
int handle_default(const char *s, int count);

#endif /* MAIN_H */
