// program to find the remainder of a/b without using % operator

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,rem;
    printf("enter a and b values: ");
    scanf("%d%d", &a, &b);
    rem = a - (a/b) * b;
    printf("\nremainder = %d\n", rem);
}
