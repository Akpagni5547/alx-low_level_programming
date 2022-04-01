#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer.
 * @s: string to convert
 * Return: the convert string
 */

int _atoi(char *s)
{
short boolean;
int i, minus, result;

i = minus = result = boolean = 0;
minus = -1;

while (s[i] != '\0')
{
if (s[i] == '-')
minus *= -1;

if (s[i] >= '0' && s[i] <= '9')
{
result *= 10;
result -= (s[i] - '0');
boolean = 1;
}
else if (boolean == 1)
break;
i++;
}
result *= minus;
return (result);
}

/**
 * main - program that multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
argc = argc - 1;
if (argc == 2)
{
int num1 = _atoi(argv[1]);
int num2 = _atoi(argv[2]);
int product = num1 * num2;

printf("%d\n", product);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
