#include "main.h"

void print_formit(char formit[], int *form_ind);

/**
 * printf - main function
 * @format - structure
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i; 
	int a = 0; 
	int c = 0;
	int flags, width, p, size, form_ind = 0;
	va_list list;
	char formit[FORM_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			formit[form_ind++] = format[i];
			if (form_ind == FORM_SIZE)
				print_formit(formit, &form_ind);
			c++;
		}
		else
		{
			print_formit(formit, &form_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			p = get_p(format, &i, list);
			size = get_size(format, &i);
			++i;
			a = handle_print(format, &i, list, formit,
				flags, width, p, size);
			if (a == -1)
				return (-1);
			c += a;
		}
	}

	print_formit(formit, &form_ind);

	va_end(list);

	return (c);
}

/**
 * print_formit - main function
 * @buffer: array
 * @buff_ind: Index
 */
void print_formit(char formit[], int *form_ind)
{
	if (*form_ind > 0)
	write(1, &formit[0], *form_ind);

	*form_ind = 0;

}
