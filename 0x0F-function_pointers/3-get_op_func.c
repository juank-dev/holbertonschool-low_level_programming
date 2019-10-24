#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - check if the operator is valid
 * @s: value input operator
 *
 * Return: 0 if false, something else otherwise.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
	i++;
	}
	printf("Error\n");
	exit(99);
}
