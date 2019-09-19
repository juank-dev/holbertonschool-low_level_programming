#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int let;
char ch = '0';
for (ch = '0'; ch <= '9' ; ch++)
putchar(ch);

for (let = 'a'; let <= 'f' ; let++)
putchar(let);
putchar('\n');
return (0);
}
