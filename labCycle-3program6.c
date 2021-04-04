/*  Generate electricity bill depending on the units consumed and varying units for units consumed. */ 


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int units,custNum;
    float charges;
    printf("\nenter customer number and units consumed: \n");
    scanf("%d%d",&custNum,&units);
    if(units <= 200){
        charges = 0.5 * units;
    }
    else if(units <= 400){
        charges = 100 + 0.65 * (units-200);
    }
    else if(units <= 600){
        charges = 230 + 0.80 * (units-400);
    }
    else{
        charges = 390 + (units - 600);
    }
    printf("\n\nCustomer Number=%d charges=%.2f\n",custNum,charges);
    return 0;
}

