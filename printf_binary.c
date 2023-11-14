#include "main.h"
/**
 * printf_bin - main function
 * @val: argument
 * Return: integer
 */
int printf_bin(va_list val)
{
	int f = 0;
	int c = 0;
	int i, n = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((n << (32 - i)) & num);
		if (p >> (31 - i))
			f = 1;
		if (f)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			c++;
		}
	}
	if (c == 0)
	{
		c++;
		_putchar('0');
	}
	return (c);
}
