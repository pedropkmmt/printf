#include "main.h"

int printf_bin(va_list val)
{
	int b = 0;
	int a = 0;
	int i, c = 1, m;
	unsigned int num = va_arg(val,unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((c << (32 - i)) & num);
		if (p >> (31 - i))
			b = 1;
		if (b)
		{
			m = p >> (31 - i);
			_putchar(m + 48);
			a++;
		}
	}
	if (a == 0)
	{
		a++;
		_putchar('0');
	}
	return (a);
}
