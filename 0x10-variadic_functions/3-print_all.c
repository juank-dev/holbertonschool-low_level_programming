#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - check the code for Holberton School students.
 * @n: number of arguments
 * @separator: character separator of numbers
 * Return: Always 0.
 */

	void op_c(va_list form)
	{
		printf("%c",va_arg(form,int));
	}

	void op_i(va_list form)
	{
		printf("%i",va_arg(form,int));
	}

	void op_f(va_list form)
	{
		printf("%f",va_arg(form,double));
	}

	void op_s(va_list form)
	{
		char *str;
		str = va_arg(form,char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s",str);
		}
	}

/**
 * print_numbers - check the code for Holberton School students.
 * @n: number of arguments
 * @separator: character separator of numbers
 * Return: Always 0.
 */

void print_all(const char * const format, ...)

{

	va_list all;
	unsigned int i, j;

	f  ops[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_s},
		};

	va_start(all, format);
	i = 0;
	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (ops[j].op[0] == format[i])
			{
				ops[j].f(all);
				if(format[i +1])
					printf(", ");
			}
			j++;
		}
	i++;
	}

	printf("\n");
	va_end(all);
}
