/**
 * 
 * Author: Kevin Koech
 *
 * main - entry point
 *
 * Description: lists odd and even number below 100
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int num;

	//Loop
	for (num = 1; num <=100; num++)
	{
		if (num % 2 == 0)
		{
			printf("Even ");
		}

		else if (num % 2 != 0)
		{
			printf("Odd ");
		}
	}

	if (num = 100)
	{
		printf("\n");
	}

	return (0);
}

