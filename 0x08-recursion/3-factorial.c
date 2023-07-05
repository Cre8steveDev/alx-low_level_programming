/**
 * factorial - Prints a string recursively
 * @n: Integer argument
 * Return: An integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
