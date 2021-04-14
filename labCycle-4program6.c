/*   write a program to display all the numbers between 1 and N which are divisible by 8. */ 


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("\nnumbers divisible by 8 between 1 and %d are: \n",n);
    for(i=8;i<=n;i=i+8)
    {
        printf("\n%d\n",i);
    }
    return 0;
}
