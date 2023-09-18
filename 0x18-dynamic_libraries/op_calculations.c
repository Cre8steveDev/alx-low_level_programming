/**
 * add - Function that adds two numbers
 * @a: First parameter
 * @b: Second parameter
 * Return: Returns the result of a and b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * mul - Function that multiplies two numbers
 * @a: First parameter
 * @b: Second parameter
 * Return: Returns the result of a and b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * sub - Function that subtracts two numbers
 * @a: First parameter
 * @b: Second parameter
 * Return: Returns the result of a and b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * div - Function that divides two numbers
 * @a: First parameter
 * @b: Second parameter
 * Return: Returns the result of a and b
 */

int div(int a, int b)
{
	if (b == 0)
		return (0);

	return (a / b);
}

/**
 * div - Function that divides two numbers
 * @a: First parameter
 * @b: Second parameter
 * Return: Returns the result of a and b
 */

int mod(int a, int b)
{
	return (a % b);
}
