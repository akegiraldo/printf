#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * p_S - entry point
 * @list: va_list variable
 *
 * Return: int
*/

int p_S(va_list list)
{
	char *str = va_arg(list, char *);
	int i = 0, c = 0;
	unsigned char ch;

	while (str[i])
	{
		if (str[i] > 32 && str[i] < 127)
		{
			_putchar(str[i]);
		}
		else
		{
			ch = str[i];
			_putchar(92);
			_putchar('x');
			c += 2;
			printf("\n  %d  \n", ch);
			if (ch > 0 && ch < 16)
			{
				_putchar('0');
			}
			else
				i++;
			c += get_hex(ch, 0);
		}
		i++;
	}
	return (i + c);
}

/**
 * p_r - entry point
 * @list: va_list variable
 *
 * @Return: int variable
*/

int p_r(va_list list)
{
	char *str = va_arg(list, char *);
	int i = 0, t = 0;

	if (str == NULL)
		str = "";

	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(str[i]);
		t++;
		i--;
	}
	//_putchar('\0');

	return (t);
}
