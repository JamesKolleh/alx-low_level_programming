#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowwecase
 * Return:0
 */
int main(void)
{
int n;
char ch;
for (n = 48; n < 58; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'g'; ch++)
putchar(ch);
}
putchar('\n');
return (0);
