/**
 * Author: Kevin Koech
 *
 * main - entry point
 *
 * Description: adds two integers that the user input
 *
 * Return: sum
 */

#include <stdio.h>

int main()
{
	int a;
	int b;
	int sum;

	    printf("Enter a: \n");
            scanf("%d", &a);

	    printf("Enter b: \n");
            scanf("%d", &b);

	    //Addition
	    sum= a + b;
	    printf("%d + %d = %d \n", a, b, sum);

	    return sum;
}

	    
