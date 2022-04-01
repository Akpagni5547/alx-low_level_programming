#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: String to convert.
 * Return: The output string
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
* main -Program that adds positive numbers.
* @argc: argument count
* @argv: argument vector
* Return: 0 or 1
*/

int main(int argc, char *argv[])
{
int sum, num, i, j, k;

sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
puts("Error");
return (1);
}
}
}
for (k = 1; k < argc; k++)
{
num = _atoi(argv[k]);
if (num >= 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}
