#include <stdio.h>
#include <unistd.h>
/**
* Description: main - prints out a  string to stdout
* Return: 0 if sucess
*/
int main(void)
{
write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 59);
return (0);
}
