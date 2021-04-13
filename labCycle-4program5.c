/*   write a program to reverse a given four digit integer number and check whether it is 
	palindrome or not. Output the given number with suitable message. */ 


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,reverse,rem;
	printf("enter a: ");
	scanf("%d",&a);
	reverse = 0;
	b = a;
	while(a>0)
	{
		rem = a % 10;
		reverse = (reverse*10) + rem;
		a = a / 10;
	}
	if(b == reverse)
	{
		printf("\npalindrome\n");
	}
	else
	{
		printf("\nnot a palindrome\n");
	}
}