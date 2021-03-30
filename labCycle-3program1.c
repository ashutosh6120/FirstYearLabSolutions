/* write a program to determine whether a given number is positive/negative/zero. */

#include<stdio.h>

int main()
{
    int num;
    printf("enter num: ");
    scanf("%d",&num);
    if(num > 0)
        printf("\npositive\n");
    else if(num < 0)
        printf("\nnegative\n");
    else
        printf("\nzero\n");
}
