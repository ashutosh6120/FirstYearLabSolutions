/*    write a program to implement euclid's  algorithm to find the gcd and lsm of two integers 
      and to output the results along with the given integers. */ 

#include<stdio.h>
#include<stdlib.h>

int main()
{
      int n1,n2,g,l,m;
      printf("enter any two numbers: ");
      scanf("%d%d",&n1,&n2);
      m=n1*n2;
      while(n1!=n2)
      {
            if(n1>n2)
                  n1 = n1 - n2;
            else
                  n2 = n2 - n1;
      }
      g = n1;
      l = m /g;
      printf("\nGCD: %d\n",g);
      printf("\nLCM: %d\n",l);
      return 0;
}
