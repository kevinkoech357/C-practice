/**
 * Author: Kevin Koech
 *
 * main - entry point
 *
 * Description: divides two integers
 *
 * Return: ans
 */

#include <stdio.h>

int main()
{
	float a, b;
	float ans;
	
	//Ask user for input
	printf("Enter a: \n");
	scanf("%f", &a);

	printf("Enter b: \n");
	scanf("%f", &b);

	//Division
	ans = a / b;
	printf("%f / %f = %f\n", a, b, ans);

	return (ans);
}
