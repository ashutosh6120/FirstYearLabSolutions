//2. Programs to perform mathematical operations using built-in  methods


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a, b, c, d;
	float x,y,z;
	
	printf("enter a and b values: ");
	scanf("%d%d", &a,&b);
	
	//for squareroot
	x = sqrt(a);
	printf("sqrt of %d is : %f\n", a,x);

	
	//for absolute
	c = abs(a);
	printf("abs of %d is : %d\n", a, c);
	
	
	//for float-absolute
	printf("enter floating value: ");
	scanf("%f",&y);
	z = fabs(y);
	printf("fabs of %f is : %f\n",y, z);

	
	//for power
	d = pow(a,b);
	printf("%d pow of %d is : %d\n", a,b, d);
	
	return 0;
}
