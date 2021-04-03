/*    DEclare the class based on 6 subject marks of a student. */


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m1, m2, m3, m4, m5, m6, total;
    float avg;
    printf("\nenter the marks in 6 subjects: \n");
    scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
    total = m1 + m2 + m3 + m4 + m5 + m6;
    avg = total / 6.0 ;
    if(avg >= 90){
	printf("\ndistinction\n");
    }
    else if(avg >=75 ){
	printf("\nFirst Class\n");
    }
    else if(avg >= 55){
	printf("\nSecond Class\n");
    }
    else{
	printf("\nFail\n");
    }

    return 0;
}
