#include "main.h"
#include <stdio.h>
/**
 *_putchar-prints out a single char
 *@c: character to be ptinted
 *Return: int
 */
int _putchar(char c)
	{
	return (write(1, &c, 1));
	}
/**
 *number_print-printt decimsals
 *@number: variable
 *Return: count
*/

int number_print(int number)
	{
	int count = 0;
	int decimal;

	if (number < 0)
	{
	_putchar('-');
	count++;
	decimal = -number;
	}
	else
	{
	decimal = number;
	}

	if (decimal < 10)
	{
	_putchar(decimal + 48);
	count++;
	}
	else
	{
	count += number_print((decimal / 10));
	_putchar((decimal % 10) + 48);
	count++;
	}

	return (count);
	}
/**
 *str_print- to print str
 *@str: str pointer
 *Return: counter
 */
int str_print(char *str)
	{
	int add = 0;
	int t = 0;

	if (str == NULL)
	{
	put_str("(null)");
	add += 6;
	}
	else
	{
	while (str[t] != '\0')
	{
	_putchar(str[t]);
	t++;
	add++;
	}
	}

    return (add);
}
/**
 *put_str- print string
 *@str: str pointer
 *Return: int
 */
void put_str(char *str)
	{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
}

