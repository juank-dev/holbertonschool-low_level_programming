#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1;
int num;

for (num = 48; num <= 57 ; num++)
{
for (num1 = num + 1 ; num1 <= 57 ; num1++)
{
putchar (num);
putchar (num1);

if (num == 56 && num1 == 57)
{
putchar ('\n');
break;
}
putchar (',');
putchar (' ');
}
}
return (0);
}
