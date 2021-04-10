/*    write a program to generate and print first 'n' fibonacci numbers */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,n;
    printf("\nenter n: ");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d\t",a);
    printf("%d\t",b);
    do
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }while(c<n);
    printf("\n");
    return 0;
}
