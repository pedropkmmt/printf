#include "main.h"

/**
 * printf_x - main function
 * @val: parameter
 * Return: count
 */
int printf_x(va_list val)
{
        int i;
        int count = 0;
        int *array;
        unsigned int num = va_args(val, unsigned int);
        int n = num;

        while (num / 16 != 0)
        {
                num = num / 16;
                count++;
        }
        count++;
        array = malloc(sizeof(int) * count);
        return (NULL);
	for ( i = 0; i < count; i++)
	{
		array[i] = n % 16;
		n = n / 16;
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
                                          
