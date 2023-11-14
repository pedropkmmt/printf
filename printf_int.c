#include "main.h"
/**
 * printf_int - main function
 * @args: argument
 * Return: number
 */
int printf_int(va_list args)
{
	int p = va_arg(args, int);
	int num, l = p % 10, digit, exp = 1;
	int i = 1;

	p = p / 10;
	num = p;

	if (l < 0)
	{
		_putchar('-');
		num = -num;
		p = -p;
		l = -l;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
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
	_putchar (l + '0');

	return (i);
}
#include "main.h"
/**
 * printf_dec - main function
 * @args: argument
 * Return: number
 */
int printf_dec(va_list args)
{
	int p = va_arg(args, int);
	int num, l = p % 10, digit, exp = 1;
	int i = 1;

	p = p / 10;
	num = p;
	if (l < 0)
	{
		_putchar ('-');
		num = -num;
		p = -p;
		l = -l;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
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
	_putchar(l + '0');

	return (i);
}
