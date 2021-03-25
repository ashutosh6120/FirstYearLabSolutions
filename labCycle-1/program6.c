/*Given the values of the variable x,y and z . write a program to rotate their values such that x has the value
 of y, y has the value of z, and z has the value of x. */ 


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y, z, temp;
    printf("enter the three numbers: ");
    scanf("%d%d%d", &x, &y, &z);
    printf("\nbefore swapping\n");
    printf("x=%d, y=%d, z=%d\n",x,y,z);
    temp = x;
    x = y;
    y = z;
    z = temp;
    printf("\nafter swapping\n");
    printf("x=%d, y=%d, z=%d\n",x,y,z);
    return 0;
}
