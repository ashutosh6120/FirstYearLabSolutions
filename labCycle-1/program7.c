/* Write a program that reads floating-pointing number and then displays the right-most digit of the integral
   part of the number. */


#include<stdio.h>

int main()
{
    float a;
    int y,z;
    printf("enter a: ");
    scanf("%f", &a);
    y = (int) a ;
    z = y % 10;
    printf("\nright most digit is: %d\n",z);
}
