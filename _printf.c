#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * iterator - entry point
 * @ft: const char variable
 * @list: va_list variable
 * @ops: ptf variable
 *
 * Return: (cont);
*/

int iterator(const char *ft, va_list list, ptf *ops)
{
	int i = 0, j = 0, b = 0, cont = 0, b2 = 0, b3 = 0;

	while (ft[i] != '\0')
	{
		j = 0;
		if (ft[i] == '%')
		{
			while (j < 11)
			{
				while (ft[i + 1] == ' ')
					i++, b2 = 1;
				if (ops[j].op == ft[i + 1])
					cont += ops[j].f(list), i += 2, j = 15, b3 = 1;
				else if (ft[i + 1] == '%')
					cont += p_p(), i += 2, b = 1, j = 15;
				else if (ft[i + 1] == '\0')
					return (-1);
				j++;
			}
		}
		if (b2 == 1 && ft[i] == ' ')
			_putchar('%'), b2 = 0, cont++;
		if (b == 0 && ft[i] != '\0' && b3 == 0)
			_putchar(ft[i]), cont++, i++;
		b = 0, b3 = 0;
	}

	return (cont);
}

/**
 * _printf - entry point
 * @ft: const char variable
 *
 * Return: (0);
*/

int _printf(const char *ft, ...)
{
	va_list list;
	int x = 0;

	ptf ops[] = {
		{'c', p_c},
		{'s', p_s},
		{'d', p_d},
		{'i', p_i},
		{'u', p_u},
		{'o', p_o},
		{'x', p_x},
		{'X', p_X},
		{'b', p_b},
		{'S', p_S},
		{'r', p_r}
	};

	va_start(list, ft);
	if (ft == NULL)
		return (-1);
	x = iterator(ft, list, ops);
	va_end(list);


	return (x);
}
