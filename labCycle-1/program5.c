//program to compute simple and compound interest

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    float principal, rate, time;
    float compoundInterest, simpleInterest;
    printf("enter principal, rate, time = \n");
    scanf("%f%f%f", &principal, &rate, &time);
    simpleInterest = (principal * rate * time ) / 100.00 ;
    compoundInterest = (principal * pow ((1 + rate / 100.0) , time )) - principal ;
    printf("simple interest is %.2f\n", simpleInterest);
    printf("compound interest is %.2f\n", compoundInterest);
    return 0;
}
