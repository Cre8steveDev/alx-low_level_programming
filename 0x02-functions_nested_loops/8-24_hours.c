#include "main.h"
/**
 * jack_bauer - prints last digit of a number
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int i;
int j;
int k;
int l;

for (i = 0; i < 3; i++)
{
for (j = i + 1; j < 4; j++)
{
for (k = i; k < 6; k++)
{
for (l = i; l < 10; l++)
{
putchar('0' + i);
putchar('0' + j);
putchar(58);
putchar('0' + k);
putchar('0' + l);
putchar('\n');
}
}
}
}
}
