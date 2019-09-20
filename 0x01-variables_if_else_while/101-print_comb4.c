#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int hol;
int hol1;
int hol2;

for (hol = 48; hol <= 57 ; hol++)
{
for (hol1 = hol + 1 ; hol1 <= 57 ; hol1++)
{
for (hol2 = hol1 + 1 ; hol2 <= 57 ; hol2++)
{
putchar (hol);
putchar (hol1);
putchar (hol2);
if (hol == 55 && hol1 == 56 && hol2 == 57)
{
putchar ('\n');
break;
}
putchar (',');
putchar (' ');
}
}
}
return (0);
}
