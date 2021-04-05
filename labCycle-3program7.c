/*  write a program to determine whether a given year is leap year or not. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int year;
    printf("\nenter year: ");
    scanf("%d",&year);
    if(((year % 4 == 0) && (year % 100!=0)) || (year % 400 == 0)){
        printf("\nIt is a leap year\n");
    }
    else{
        printf("\nIt is not a leap year\n");
    }
    return 0;
}
