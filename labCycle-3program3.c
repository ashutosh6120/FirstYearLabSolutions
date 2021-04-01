/* Write a program to determine whether a given number is odd or even and print the message
   NUMBER IS EVEN or NUMBER IS ODD with and without using else option */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, rem;
    printf("enter number: ");
    scanf("%d",&num);
    rem = num % 2;
    if(rem == 0){
	printf("\nNUMBER IS EVEN\n");
    }
    else{
        printf("\nNUMBER IS ODD\n");
    }

    return 0;
}
