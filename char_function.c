#include "main.h"

/**
 * print_char - print characters
 * @i: i
 * @ptr: pointer element
 * @format: format specifier.
 * @count: increments the characters
 *
 * Return: int
 */
int print_char(int *i, va_list ptr, const char *format, int *count)
{
	if (format[*i + 1] == 'c')
	{
		char c = va_arg(ptr, int);

		if (c == 0)
			return (-1);

		_putchar(c);
		*count = *count + 1;
		*i = *i + 1;
	}
	return (0);
}
