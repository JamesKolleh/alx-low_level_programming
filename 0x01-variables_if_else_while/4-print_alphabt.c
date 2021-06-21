#include <stdio.h>

/**
 * main - print alphabet in lower case
 * excluding e and q
 * Return: 0
 */
int main(void)
{
char i = 'a';
while (i = <= 'z')
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
i++;
}
putchar('\n');
return (0);
}
