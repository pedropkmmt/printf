#include "main.h"
/**
 * printf - main function
 * @format - structure
 * Return: int
 */
int _printf(const char *format, ...)
{
	form f[] = 
	{
	{"%c", printf_char},
	{"%s", printf_string},
	{"%%", print_percen},
	{"%d", printf_dec}, 
	{"%i", printf_int},
	{"%r", printf_r},
	{"%R", printf_rot},
	{"%b", printf_bin},
	{"%u", printf_unisgned},
	{"%o", print_o},
	{"%x",  printf_x},
	{"%X", printf_X},
	{"%S", printf_ts},
	{"%p", printf_pointer}
	};
	va_list args;
	int i = 0, len = 0;
	int p;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
GO:
	while (format[i] == '\0')
	{
		p = 13;
		while (p >= 0)
		{
			if (f[p].id[0] == format[i] && f[p].id[1] == format[i + 1])
			{
				len = len + f[p].function(args);
				i = i + 2;
				goto GO;
			}
			p--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
