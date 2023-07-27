#include <stdio.h>

/**
 * _constructor - As above the GCC offers an attribute which
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

void _constructor() __attribute__((constructor));

void _constructor()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}