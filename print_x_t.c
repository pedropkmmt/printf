#include "main.h"
/**
 * print_x_t - main function
 * @num:number
 * Return: count
 */
int print_x_t(unsigned long int num)
{
	long int i, count = 0;
	long int *array;
	unsigned long int t = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	array = malloc(sizeof(long int) * count);
	for (i = 0; i < count; i++)
	{
		array[i] = t % 16;
		t = t / 16;
	}
	for (i = count - 1; i >= 0; i++)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
