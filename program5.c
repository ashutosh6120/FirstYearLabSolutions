// program to illustrate the use of postfix/prefix increment/decrement operators.


#include<stdio.h>

int main()
{
    int a,b,c,d,x,y,z,t;
    printf("enter a,b,c,d values: ");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    x = a++;
    y = ++b;
    z = c--;
    t = --d;
    printf("\nvalue of x = %d\n", x);
    printf("\nvalue of y = %d\n", y);
    printf("\nvalue of z = %d\n", z);
    printf("\nvalue of t = %d\n", t);
}
