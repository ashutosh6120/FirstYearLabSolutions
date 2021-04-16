/*    write a program to generate and print all the prime numvebs between given range.  */


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,flag=0,a,b;
    printf("enter the value of a and b: \n");
    scanf("%d%d",&a,&b);
    printf("\nprime numbers between %d and %d are: \n",a,b);
    for(n = a; n<=b; n++)
    {
        flag = 0;
        for(i =2;i<=(n/2); i++)
        {
            if((n%i)==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
            printf("%d\n",n);
    }
    return 0;
}
