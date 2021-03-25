/* write a program that reads floating-pointing number, separate and displays the integral and
	decimal part of the given. */ 


#include<stdio.h>

int main()
{
    float number;
    int integral;
    printf("enter number: ");
    scanf("%f", &number);
    integral = number;
    float fractional = number - integral;
    printf("%d\n %f\n", integral, fractional);
}
