#include "main.h"

/**
 * _printf_char - main function
 * @val: argument
 * Return: 1
 */

int _printf_char(va_list val)
{
	char c;
	c = va_arg(val, int);
	_putchar(c);
	return (1);
}
