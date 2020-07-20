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
		{'c', func_char},
		{'s', func_string},
		{'%', func_porc},
		{NULL, NULL}
	};
	va_list ap;
	int print;

	va_start(ap, format);
	
	va_end(ap);
	return (printf);

}