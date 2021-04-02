/*   design, develop and execute a program to find and output all the roots of a given 
     quadratic equation, for non-zero coefficients.  */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a,b,c;
    float x1,x2,n;
    printf("\nenter a,b,c values: ");
    scanf("%d%d%d",&a,&b,&c);
    if(b*b-4*a*c >= 0){
	n = sqrt(b*b - 4*a*c);
	if(n==0){
	   printf("\nroots are equal\n");
	   x1 = x2 = -b/(2*a) ;
	   printf("\nx1 = x2 = %.f\n",x1);
        }
        else{
	   printf("\nroots are unequal\n");
           x1 = (float) (-b + n) / (2 * a) ;
           x2 = (float) (-b + n) / (2 * a) ;
           printf("\nx1 = %f and x2 = %f\n", x1,x2);
        }
    }
    else{
	printf("\nroots are imaginary\n");
    }
    
    return 0;
}
