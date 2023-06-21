/**
 * positive_or_negative - Entry point
 * Description: Prints positive or negative
 * Return: Always 0 (Success)
 */
#include "main.h"

void positive_or_negative(int i)
{
int n = i;

if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is positive\n", n);
}
