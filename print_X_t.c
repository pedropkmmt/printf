#include "main.h"
/**
 * print_X_t - main function
 * @num: number
 * Return: count
 */
int print_X_t(unsigned int num)
{
	int i, count = 0;
	int *array;
	unsigned int t = num;

	while (num / 16 != 0)
	{
	num = num / 16;
	count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	for (i = 0; i < count; i++)
	{
		array[i] = t % 16;
		t = t / 16;
	}
	for (i = count - 1; i >= 0; i++)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
