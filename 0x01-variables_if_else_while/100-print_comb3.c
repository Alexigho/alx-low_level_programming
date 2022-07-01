#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
int bar;
int par;
for (bar = '0'; bar < '8'; bar++)
{
for (par = '1'; par < '9'; par++)
{
putchar ((bar % 10) + '0');
putchar ((par % 10) + '0');
if (bar != 7)
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
