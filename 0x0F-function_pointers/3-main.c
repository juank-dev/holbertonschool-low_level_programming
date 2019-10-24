#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * main - check the program
 * @argc: arguments cant
 * @argv: vector arguments
 * Return: 0 if false, something else otherwise.
 */
int main(int argc, char *argv[])
{
	int (*get)(int, int);
	int a, b, operator;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2][0];
	switch (operator)
	{
	case '+':
		break;
	case '-':
		break;
	case '*':
		break;
	case '/':
		break;
	case '%':
		break;
	default:
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	get = get_op_func(argv[2]);
	printf("%d\n", get(a, b));
	return (0);
}
