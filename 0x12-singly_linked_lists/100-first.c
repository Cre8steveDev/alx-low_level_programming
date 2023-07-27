#include <stdio.h>

/**
 * _constructor - function called before main
 * Return: Void Always
 */
void _constructor(void) __attribute__((constructor));

void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/**
 * constructor - As above the GCC offers an attribute which
 * Allows you define a function that is called/executed
 * before the main function of the program is executed.
 *
 * The counterpart is the destructor, which is executed
 * after the main function
 * void _destructor() __attribute__((destructor));
 * void _destructor()
 * {
 *     printf("Destructor called after main()\n");
 * }
 */
