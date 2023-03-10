/**
 * Author: Kevin Koech
 *
 * main - entry point
 *
 * Description: checks if a number input by user is odd or even
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	int num;

	//Ask for input
	printf("Enter a number: \n");
	scanf("%d", &num);
	
	if (num % 2 == 0)
	{
		printf("The number is even.\n");
	}

	else
	{
		printf("The number is odd.\n");
	}

	return (0);
}

