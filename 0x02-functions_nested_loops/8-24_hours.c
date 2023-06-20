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
for (j = 0; j <= 9; j++)
{
for (k = 0; k < 6; k++)
{
for (l = 0; l < 10; l++)
{
if (i == 2 && j == 3)
	break;
_putchar('0' + i);
_putchar('0' + j);
_putchar(58);
_putchar('0' + k);
_putchar('0' + l);
_putchar('\n');
}
}
}
}
}
