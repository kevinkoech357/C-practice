/**
 * Author: Kevin Koech
 *
 * main - entry point
 *
 * Description: multiplies two integers
 *
 * Return: ans
 */

#include <stdio.h>

int main()
{
	int a, b, ans;

	printf("Enter a: \n");
        scanf("%d", &a);

        printf("Enter b: \n");
        scanf("%d", &b);

        //Multiplication
        ans= a * b;
        printf("%d * %d = %d \n", a, b, ans);

        return ans;
}
