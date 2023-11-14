#include "main.h"
/**
 * printf_unsigned - main function
 * @args: argument
 * @Return: characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int p = va_arg(args, unsigned int);
	int num, n = p % 10, digit, exp = 1;
	int i = 1;

	p = p / 10;
	num = p;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		p = -p;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp *10;
			num = num / 10;
		}
		num = p;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(n + '0');
	return (i);
}

