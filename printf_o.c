#include "main.h"
/**
 * print_o - main function
 * @val: parameter
 * Return: count
 */
int print_o(va_list val)
{
	int i, count = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int t = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	for (i = 0; i < count ; i++)
	{
		array[i] = t % 8;
		t = t / 8;
	}
	for (i = count - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (count);
}
