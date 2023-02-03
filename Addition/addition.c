#include <stdio.h>
#include <math.h>

// Author: Kevin Koech
// Date: 02/02/2023
// This program add two numbers that the user will enter

int main()
{
	int a;
	int b;
	int sum;

	    printf("Enter a: \n");
            scanf("%d",&a);

	    printf("Enter b: \n");
            scanf("%d", &b);

	    //Addition
	    sum= a + b;
	    printf("%d + %d= %d\n", a, b, sum);

	    return sum;
}

	    
