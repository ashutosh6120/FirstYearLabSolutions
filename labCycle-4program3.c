/*   write a program to find the sum of digits of a number reducing into single digit */ 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,n1,sum,r;
    printf("\nenter a number: ");
    scanf("%d",&n);
    sum=0;
    n1=n;
    printf("\nthe sum of all digits of %d to single digit is \n",n1);
    do
    {
        sum=0;
        while(n>0)
        {
            r=n%10;
            sum=sum+r;
            n=n/10;
        }
        n=sum;
    }while(n>9);
    printf("%d\n",n);
    return 0;
}
