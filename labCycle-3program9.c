/*    write a program to simulate simple calculator. */


#include<stdio.h>
#include<stdlib.h>


int main()
{
    int a,b,c,choice;
    float d;
    printf("\n1.add");
    printf("\n2.sub");
    printf("\n3.multiply");
    printf("\n4.divide");
    printf("\nenter your choice[1-4]: ");
    scanf("%d",&choice);
    printf("\nenter a and b values: \n");
    scanf("%d%d",&a,&b);
    switch(choice)
    {
	case 1: c = a + b;
		printf("\nsum = %d\n",c);
		break;
	case 2: c = a - b;
		printf("\n difference = %d\n",c);
		break;
	case 3: c = a * b;
		printf("\n product = %d\n", c);
		break;
	case 4: d = a / b;
		printf("\n quotient = %f\n", d);
		break;
	default: printf("\n invalid choice\n");
		 break;
    }
    
    return 0;
}

