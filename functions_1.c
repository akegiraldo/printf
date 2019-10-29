#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * p_u - entry point
 * @list: va_list variabl
 *
 * Return: int
*/

int p_u(va_list list)
{
	unsigned int str = va_arg(list, unsigned int), i = 0;

	i = print_number(str, 0);
	return (i);
}

/**
 * p_o - entry point
 * @list: va_list variable
 *
 * Return: int
*/

int p_o(va_list list)
{
	unsigned int str = va_arg(list, unsigned int), i = 0;

	if (str == 0)
	{
		_putchar('0');
		return (1);
	}
	i = get_octal(str);
	return (i);
}

/**
 * p_x - entry point
 * @list: va_list
 *
 * Return: int
*/

int p_x(va_list list)
{
	unsigned int str = va_arg(list, unsigned int), i = 0;

	if (str == 0)
	{
		_putchar('0');
		return (1);
	}
	i = get_hex(str, 1);
	return (i);
}

/**
 * p_X - entry point
 * @list: va_list
 *
 * Return: int
*/

int p_X(va_list list)
{
	unsigned int str = va_arg(list, unsigned int), i = 0;

	if (str == 0)
	{
		_putchar('0');
		return (1);
	}
	i = get_hex(str, 0);
	return (i);
}

/**
 * p_b - entry point
 * @list: va_list variable
 *
 * Return: int
*/

int p_b(va_list list)
{
	unsigned  int str = va_arg(list, unsigned  int), i = 0;

	if (str == 0)
	{
		_putchar('0');
		i++;
	}
	else
		i = get_bin(str, i);

	return (i);
}
