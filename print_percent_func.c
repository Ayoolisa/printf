#include "main.h"

/**
 * print_percent_func - prints percentages
 * @i: integer value
 * @format: format
 * @count: count
 *
 * Return: integer
 */
int print_percent(int *i, const char *format, int *count)
{
	if (format[*i + 1] == '%')
	{
		_putchar('%');

		*count = *count + 1;

		*i = *i + 1;
	}
	return (0);
}

