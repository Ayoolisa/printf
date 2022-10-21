#include "main.h"

/**
 * main - check the code for ALX Students
 *
 * Return: Always 0.
 */
int main(void)
{
	int len;
	int len2;
	unsigned int u;
	void *addr;

	len = _printf("Let's try to _printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	u = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", u);
	printf("Unsigned:[%u]\n", u);
	_printf("Unsigned octal:[%o]\n", u);
	printf("Unsigned octal:[%o]\n", u);
	_printf("Unsigned hexadecimal:[%x, %X]\n", u, u);
	printf("Unsigned hexadecimal:[%x, %X]\n", u, u);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len);

	return (0);
}
