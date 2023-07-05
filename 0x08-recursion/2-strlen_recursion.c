/**
 * _print_rev_recursion - Prints a string recursively
 * @s: string argument of the function
 * Return: Void always
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	return 1 + _strlen_recursion(s + 1);
}
