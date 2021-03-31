// WRite a program to find the largest of two/three numbers

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;
    printf("enter a,b,c values: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b){
	printf("\na is largest among 2 numbers");
    }
    else{
	printf("\nb is largest among 2 numbers");
    }
    
    if(a > b && a > c){
	printf("\na is largest among 3 numbers");
    }
    else if(b > a && b > c){
	printf("\nb is largest among 3 numbers");
    }
    else{
	printf("\nc is largest among 2 numbers\n");
    }
    
    return 0;
}
