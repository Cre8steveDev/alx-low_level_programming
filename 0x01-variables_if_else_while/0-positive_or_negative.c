/**
 * main - Entry point
 * Description: Prints positive or negative
 * Return: Always 0 (Success)
 */
#include <stdlib.h>
#include <time.h>

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n == 0)
printf("%d is zero", n);
else if (n < 0)
printf("%d is negative", n);
else
printf("%d is positive", n);

return (0);
}
