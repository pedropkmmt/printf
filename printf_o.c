#include "main.h"

/**
 * printf_o - main function
 * @val: parameter
 * Return: count
 */
int printf_o(va_list val)
{
	int i;
	int count = 0;
	int *array;
	unsigned int num = va_args(val, unsigned int);
	int n = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	return (NULL);
	for (i = 0; i < count; i++)
	{
		array[i] = n % 8;
		n = n / 8;
	}
	for (i = count - 1; i >=0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (count);
}

