#include "holberton.h"
#include <stdio.h>

/**
 * print_number - entry point
 * @n: int
 * @t: int
 *
 * Return: t
*/

int print_number(long int n, int t)
{
	unsigned long int a;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
		t++;
	}
	else
		a = n;
	if (a / 10)
		t = print_number(a / 10, t);
	_putchar((a % 10) + '0');
	t++;
	return (t);
}

/**
 * get_octal - entry point
 * @n: int
 *
 * Return: i
*/

int get_octal(unsigned int n)
{
	int octal[100], i = 0, j;

	while (n != 0)
	{
		octal[i] = n % 8;
		n = n / 8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(octal[j] + '0');

	return (i);
}

/**
 * get_hex - entry point
 * @n: int variable
 * @p: int variable
 *
 * Return: i
*/

int get_hex(unsigned long int n, int p)
{
	int tmp = 0, i = 0, j, plus;
	char hex[100];

	if (p == 0)
		plus = 55;
	else
		plus = 87;
	while (n != 0)
	{
		tmp = 0;
		tmp = n % 16;
		if (tmp < 10)
		{
			hex[i] = tmp + 48;
			i++;
		}
		else
		{
			hex[i] = tmp + plus;
			i++;
		}
		n = n / 16;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(hex[j]);
	return (i);
}

/**
 * get_bin - entry point
 * @n: unsigned int variable
 * @t: int variable
 *
 * Return: int
*/

int get_bin(unsigned int n, int t)
{
	int aux;

	if (n == 0)
		return (0);

	aux = n % 2;
	n = n / 2;
	t = get_bin(n, t);
	t++;
	_putchar(aux + '0');
	return (t);
}
