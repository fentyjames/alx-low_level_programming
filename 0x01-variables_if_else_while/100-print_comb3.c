#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * program that prints all possible different combinations of two digits.
 */
int main(void)
{
int number;
int number1;

for (number = '0'; number < '9'; number++)
{
for (number1 = '0'; number1 <= '9'; number1++)
{
if (number == '0' && number1 < '1')
continue;
if (number == '1' && number1 < '2')
continue;
if (number == '2' && number1 < '3')
continue;
if (number == '3' && number1 < '4')
continue;
if (number == '4' && number1 < '5')
continue;
if (number == '5' && number1 < '6')
continue;
if (number == '6' && number1 < '7')
continue;
if (number == '7' && number1 < '8')
continue;
if (number == '8' && number1 < '9')
continue;
putchar(number);
putchar(number1);
if (number == '8' && number1 == '9')
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
