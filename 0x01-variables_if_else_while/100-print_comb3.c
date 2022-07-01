#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
int bar;
int par;
for (bar = 0; bar < 9; bar++)
{
for (par = bar + 1; par < 10; par++)
{
putchar ((bar % 10) + '0');
putchar ((par % 10) + '0');
if (bar != 8)
{
putchar(',');
putchar(' ');
}
else
continue;
}
}
putchar('\n');
return (0);
}
