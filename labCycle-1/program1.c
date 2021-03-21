//1. Accept two numbers and perform basic operations

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a, b, c; //declaring variables
	printf("enter two values a and b: \n");
	scanf("%d%d", &a,&b);		//taking two input values from user
	
	c = a + b;
	printf("the sum of two numbers is: %d", c);
	
	c = a - b;
	printf("\nthe differences of two numbers is: %d", c);
	

	c = a * b;
	printf("\nthe product of two numbers is: %d", c);
	

	c = a / b;
	printf("\nthe division of two numbers is: %d", c);
	
	c = a % b;
	printf("\nthe remainder of two numbers is: %d", c);
	printf("\n");
}
	
