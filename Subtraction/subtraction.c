/**
 * Author: Kevin Koech
 *
 * main - Entry point
 *
 * Description: Subtracts two integers that the user input
 *
 * Return: ans
 */

#include <stdio.h>

int main()
{
	int a;
	int b;
	int ans;

	    printf("Enter a: \n");
            scanf("%d", &a);

	    printf("Enter b: \n");
            scanf("%d", &b);

	    ans= a - b;
	    printf("%d - %d = %d \n", a, b, ans);

	    return ans;
}

	    
