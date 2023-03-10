/**
 * Author: Kevin Koech
 *
 * main - entry point
 *
 * Description: Famous fizzbuzz
 *
 * Return: Fizz for numbers divisble by 3
 * Buzz for numbers divisible by 5
 * and FizzBuzz for numbers divisble by
 * 3 and 5
 */

#include <stdio.h>

int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}

		else
		{
			printf("%d ", num);
		}
	}

	if (num = 100)
	{
		printf("\n");
	}

	return (0);
}
