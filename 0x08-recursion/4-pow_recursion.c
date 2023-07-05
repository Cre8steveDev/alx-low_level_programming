/**
 * _pow_recursion - Prints a string recursively
 * @x: Integer argument
 * @y: Second Integer argument
 * Return: An integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}
