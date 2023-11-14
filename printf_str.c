#include "main.h"
/**
 * _strlen - main function
 * @str:pointer
 * Return: 1
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
/**
 * _strlent - main function
 * @str: pointer
 * Return:1
 */
int _strlent(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
