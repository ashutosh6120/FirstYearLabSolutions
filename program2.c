/*  Program to check if given number is even or odd using bitwise & operator */

#include<stdio.h>

int main()
{
    int num;
    printf("enter number: ");
    scanf("\n%d", &num);
    int value;
    value =  num & 1;
    (value==0) ? printf("\neven\n"): printf("\nodd\n");
    return 0;
}
