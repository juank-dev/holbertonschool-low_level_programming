#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int let;
char ch = 'a';
for (ch = 'a'; ch <= 'z' ; ch++)
putchar(ch);

for (let = 'A'; let <= 'Z' ; let++)
putchar(let);
putchar('\n');
return (0);
}
