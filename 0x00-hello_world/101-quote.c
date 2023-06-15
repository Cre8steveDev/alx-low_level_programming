/**
 * main - Entry point
 * Description: UNIX is basically a simplem
 * Return: Always 0 (Success)
 */
#include <unistd.h>
#include <string.h>
int main(void)
{
char our_name[] = "and that piece of art is useful\"
- Dora Korpar, 2015-10-19\n";
write(2, our_name, strlen(our_name));
return (1);
}
