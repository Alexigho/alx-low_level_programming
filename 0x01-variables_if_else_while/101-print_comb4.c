#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
int bar;
int par;
int sar;
for (bar = 0; bar < 8; bar++)
{
for (par = bar + 1; par < 9; par++)
{
for (sar = par + 1; sar < 10; sar++)
{
putchar((bar % 10) + '0');
putchar((par % 10) + '0');
putchar((sar % 10) + '0');
if (bar != 7)
{
putchar(',');
putchar(' ');
}
else
continue;
}
}
}
putchar('\n');
return (0);
}
