/*     write a C program to find the value of cos(x) using the series
	1 - x2/2! + x4/4! - x6/6! + x8/8! - .........
       upto N terms accuracy (without using user defined function).
       also printf cos(x) using library function.  */


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
       float x,x1,n,i,sum,sign=-1,r=2,num,den=1;
	printf("enter the angle: ");
	scanf("%f",&x);
	x1 = x;
	x = ((22.0/7.0)/180.0) * x;
	printf("enter the value of n: ");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		num = pow(x,r);
		den = r * (r-1) * den;
		sum =  sum + ((sign) * (num/den));
		r = r + 2;
		sign = sign + (-1);
	}
	printf("\ncos of the angle %f: %f\n",x1,sum);
	printf("\ncos of the given angke using builtin function: %f\n",cos(x));
       return 0;
}

