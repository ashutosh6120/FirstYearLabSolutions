/*    write a C program to find the value of sin(x)  using the series
	x - x3/3! + x5/5! - x7/7! + x9/9! - .......
	up to N terms accuracy (without using user defined function)
       Also print sin(x) using library functions.  */


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float x,x1,n,i,sine,sign=-1,r=3,num,den=1;
	printf("enter the angle: ");
	scanf("%f",&x);
	x1 = x;
	x = ((22.0/7.0)/180.0) * x;
	printf("enter the value of n: ");
	scanf("%f",&n);
	sine = x;
	for(i=1;i<=n;i++)
	{
		num = pow(x,r);
		den = r * (r-1) * den;
		sine =  sine + ((sign) * (num/den));
		r = r + 2;
		sign = sign + (-1);
	}
	printf("\nsine of the angle %f: %f\n",x1,sine);
	printf("\nsine of the given angke using builtin function: %f\n",sin(x));
    return 0;
}

