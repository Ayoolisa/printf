#include "main.h"

/**
 * digit_func - print normal digits
 * @list: list of args
 *
 * Return: length
 */
int digit_func(va_list list)
{
	unsigned int m;
	int i = 0, k = 0, n = 0, count = 0;

	n = va_arg(list, int);
	if (n <= INT_MAX && n >= INT_MIN)
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
			count += 1;
		}
		m = n;
		for (k = 0; (m / 10) > 0; k++)
			m /= 10;

		m = n;
		while (k != 0)
		{
			for (i = 0; i < k; i++)
				m /= 10;
			m %= 10;
			_putchar(m + '0')
				count++;
			k--;
			m = n;
		}
		_putchar(m % 10 + '0');
		count++;
	}
	else
	{
		return (-1);
	}
	return (count);
}

/**
 * print_number - prints signed numbers
 * @n: parameter
 *
 * Return: count
 */
int print_number(long n)
{
	static int count;

	unsigned int x = 0;

	if (n < 0)
