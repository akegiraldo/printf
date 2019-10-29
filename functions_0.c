#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * p_c - entry point
 * @list: va_list variabl
 *
 * Return: int
*/

int p_c(va_list list)
{
	char s = va_arg(list, int);

	_putchar(s);
	return (1);
}

/**
 * p_s - entry point
 * @list: va_list variable
 *
 * Return: int
*/

int p_s(va_list list)
{
	char *str = va_arg(list, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * p_p - entry point
 *
 * Return: int
*/

int p_p(void)
{
	_putchar('%');
	return (1);
}

/**
 * p_d - entry point
 * @list: va_list variable
 *
 * Return: int
*/

int p_d(va_list list)
{
	int str = va_arg(list, int), i = 0;

	i = print_number(str, 0);
	return (i);
}

/**
 * p_i - entry point
 * @list: va_list
 *
 * Return: int
*/

int p_i(va_list list)
{
	int str = va_arg(list, int), i = 0;

	i = print_number(str, 0);
	return (i);
}
