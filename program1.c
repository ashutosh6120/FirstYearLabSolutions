/*   write a program to sum odd and even numbers up to 'n' */ 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,esum,osum,i;
    esum = 0;
    osum = 0;
    printf("\nenter any number: ");
    scanf("%d",&n);
    i = 1;
    while(i<=n)
    {
        if((i%2)==1)
            osum = osum + i;
        else
            esum = esum + i;
        i++;
    }
    printf("\nsum of odd numbers upto %d: %d\n",n,osum);
    printf("\nsum of even numbers upto %d: %d\n",n,esum);
    return 0;
}