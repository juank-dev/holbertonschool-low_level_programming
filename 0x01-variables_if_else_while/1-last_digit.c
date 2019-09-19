#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, n1;

srand(time(0));
n = rand() - RAND_MAX / 2;
n1 = n % 10;

if (n1 > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n1);
}
else if (n1 == 0)
{
printf("Last digit of %d is %d and is 0\n", n, n1);
}
else if (n1 < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n1);
}
return (0);
}
