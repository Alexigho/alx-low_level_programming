#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int bar;
int par;

for (bar = '0'; bar <= '9'; bar++)
{
putchar(bar);
}
for (par = 'a'; par <= 'f'; par++)
{
putchar(par);
}
putchar('\n');
return (0);
}
