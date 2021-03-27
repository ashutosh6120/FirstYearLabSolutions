/*  program to perform the following using ternary operator
    a)  check if given number is positive or negative
    b)  find the largest of two/three numbers  */ 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    (n>0) ? printf("\npositive") : printf("\nnegative");


    // for two numbers
    int a,b;
    printf("\nenter a and b: ");
    scanf("%d%d", &a, &b);
    (a > b) ? printf("\na is biggest") : printf("\nb is biggest");



    //three numbers
    int x,y,z;
    printf("\nenter x,y,z values: ");
    scanf("%d%d%d", &x,&y,&z);
    (x>y && x>z) ? printf("\nx is largest"): (y>x && y>z)? printf("\ny is largest") : printf("\nz is largest");

}
