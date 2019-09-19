#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch1;
int ch;

for (ch = '0'; ch <= '9' ; ch++)
for (ch1 = '0'; ch1 <= '9' ; ch1++)
{
putchar (ch);
putchar (ch1);

if (ch == '9' && ch1 == '9')
{
putchar ('\n');
break;
}
putchar (',');
putchar (' ');

}
return (0);
}
