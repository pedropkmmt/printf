#include "main.h"

/**
 * printf_ts - main function
 * @val: value
 * Return: character
 */

int printf_ts(va_list val)
{
	char *s;
	int i, len = 0;
	int v;

	s = va_arg(val, char *);
	if (s == NULL)
	s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] < 32 || s[i] >= 127)
	{
	_putchar('\\');
	_putchar('x');
	len = len + 2;
	v = s[i];
	if (v < 16)
	{
	_putchar('0');
	len++;
	}
	len = len + print_X_t(v);
	}
	else
	{
		_putchar(s[i]);
		len++;
	}
	}
	return (len);
}
