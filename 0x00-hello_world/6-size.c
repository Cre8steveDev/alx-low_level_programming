/**
 * main - Entry point
 * Description: Printing the sizes of various types
 * such as the char, int, long int, long long int
 * and the float data types
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
char _char;
int _int;
long int _longint;
long long int _llint;
float _float;

printf("Size of a char: %lu byte(s)\n", sizeof(_char));
printf("Size of a int: %lu byte(s)\n", sizeof(_int));
printf("Size of a long int: %lu byte(s)\n", sizeof(_longint));
printf("Size of a long long int: %lu byte(s)\n", sizeof(_llint));
printf("Size of a float: %lu byte(s)\n", sizeof(_float));
return (0);
}
