#include "holberton.h"

/**
 * _printf - function that produces output according to a format
 * @format: is a character string. The format string is composed or more d
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	type_t function[] = {
		{"c", func_char},
		{"s", func_string},
		{"%", func_porc},
		{"i", func_int},
		{"d", func_dec},
		{"b", print_b},
		{"u", func_u},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{NULL, NULL}
	};
	va_list ap;
	int print = 0;

	va_start(ap, format);
	print = select_func(format, ap, function);
	va_end(ap);
	return (print);
}
