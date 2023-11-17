#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * printf - main function
 * @format - structure
 * Return: int
 */
int _printf(const char *format, ...)
{
	int car = 0;
	va_list args_list;
	
	if (format == NULL)
	{
		return (-1);
	}

	va_start(args_list, format);

	while(*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			c++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				car++;
			}
			else if(*format == 'c')
			{
				char c = va_arg(args_list, int);
				write(1, &c , 1);
				car++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args_list, char*);
				int len = 0;

				while (str[len] != '\0')
					len++;
				write(1, str, len);
				car += len;
			}
		}
		format++;
	}
	va_end(args_list);
	return (car);
}
