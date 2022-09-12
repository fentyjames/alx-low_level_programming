#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * program that prints all possible different combinations of three digits.
 */
int main(void)
{
int number;
int number1;
int number2;

for (number = '0'; number <= '7'; number++)
{
for (number1 = number + 1; number1 <= '9'; number1++)
{
for (number2 = number1 + 1; number2 <= '9'; number2++)
{
putchar(number);
putchar(number1);
putchar(number2);
if (number == '7' && number1 == '8' && number2 == '9')
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
