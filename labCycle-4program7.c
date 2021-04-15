/*    write a program to determine whether a given number is prime or not. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,div,rem;
    printf("enter a: ");
    scanf("%d",&a);
    for(div=2; div=a-1; div++)
    {
        rem=a % div;
        if(rem == 0)
            break;
        else
            continue;
    }
    if(rem == 0)
        printf("\n not a prime\n");
    else
        printf("\nprime number\n");
    return 0;
}
