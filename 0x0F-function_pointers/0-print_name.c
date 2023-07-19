/**
 * print_name - A function with a string and callback
 * @name: Argument of name
 * @f: Callback function
 * Return: Always void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
