/* program to perform the following using bitwise operators:
        c = a & b;
        d = a | b;
        e = ~a;
        f = a >> n;
        g = a << n;
        h = a ^ b;
*/


#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,n;
    printf("enter a,b and n values: ");
    scanf("%d%d%d", &a, &b,&n);
    c = a & b;
    d = a|b;
    e = ~a;
    f = a >> n;
    g = a << n;
    h = a ^ b;
    printf("\na & b = %d\n",c);
    printf("\na | b = %d\n",d);
    printf("\n~a = %d\n",e);
    printf("\na >> n=%d\n",f);
    printf("\na << n=%d\n",g);
    printf("\na ^ b= %d\n",h);
}
