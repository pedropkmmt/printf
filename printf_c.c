#include "main.h"
/**
 * printf_char - main function
 * @val: argument
 * Return: 1
 */
int printf_char(va_list val)
{
	char i;

	i = va_arg(val, int);
	_putchar(i);
	return (1);
}
