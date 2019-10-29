#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
/**
 * struct printf_ - struct
 * @op: char
 * @f: *f
*/

typedef struct printf_
{
	char op;
	int (*f)(va_list);
} ptf;
int _printf(const char *format, ...);
int _putchar(char c);
int p_c(va_list list);
int p_s(va_list list);
int p_d(va_list list);
int p_i(va_list list);
int p_u(va_list list);
int p_o(va_list list);
int p_x(va_list list);
int p_X(va_list list);
int p_b(va_list list);
int p_S(va_list list);
int p_r(va_list list);
int p_a(va_list list);
int p_p(void);

int print_number(long int n, int t);
int get_octal(unsigned int n);
int get_hex(unsigned int n, int p);
int get_bin(unsigned int n, int t);
#endif
