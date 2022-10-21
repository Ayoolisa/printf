#include "main.h"

int _loopExtraction(Choice choice[], const char *format, int size,
		int *i,
		va_list list, int *count);
/**
 * nextFunction - next function
 * @current: Current format
 * @check: CHoice to check Ginst
 * @i: param i
 * @list: struct
 *
 * Return: loop return
 */
LoopReturn nextFuncton(const char *current, Choice check, int i, va_list list)
{
	LoopReturn lt;

	if (current[i + 2] == check.specifier[1] && check.specifier[0] == '+')
	{
		lt.count = check.f(list);
	}
	It.i = i + 2;
	return (It);
}

/**
 * get_func.c - gets the needed function
 * @format: string
 * @list: variadic list
 * @choice: variadic struct
 * @size: size of struct
 *
 *  Return: size of formatted string
 */
int get_func(const char *format, va_list list, Choice choice[], int size)
{
	int i = 0, count = 0;

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			int a = _loopExtraction(choice, format, size, &i, list, &count);

			if (a < 0)
				return (-1);
		}
	}
	if (format == NULL)
		return (-1);
	return (count);
}

/**
 * _loopExtraction - extracts loop
 * @choice: choice array
 * @format: format string
 * @size: size of format string
 * @i: iterator
 * @list: variadic list
 * @count: string count
 *
 * Return: -1 if unsuccessful
 */
int _loopExtraction(Choice choice[], const char *format, int size, int *i,
		va_list list, int *count)
{
	int j = 0, num = 0;

	for (j = 0; j < size; j++)
	{
		if (choice[j].specifier)
		{
			if (format[*i + 1] == choice[j].specifier[0] && !choice[j].specifier[1])
			{
				num = choice[j].f(list);
				*count += num;
				*i += 1;
				break;
			}
		}
		if (format[*i + 1] == '+' && (format[*i + 2] == choice[j].specifier[1]))
		{
			num = choice[j].f(list);
			{
				_putchar(format[*i]);
				_putchar(format[*i + 1]);
				*count += 2;
				*i += 1;
			}
			else
				return (-1);
		}
	}
	return (0);
}
