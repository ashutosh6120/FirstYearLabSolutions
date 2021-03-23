//Program to convert temperature from celsius to fahrenheit and vice versa


#include<stdio.h>


int main()
{
    float celsius, toFahrenheit;
    printf("enter the temp in celsius: ");
    scanf("%f", &celsius);
    toFahrenheit = (9.0/5.0) * celsius + 32;
    printf("\nthe converted temp is: %f", toFahrenheit);

    float toCelsius, fahrenheit;
    printf("\n\nenter the temp in fahrenheit: ");
    scanf("%f", &fahrenheit);
    toCelsius = (5.0/9.0) * (fahrenheit - 32);
    printf("\nthe converted temp is: %f\n", toCelsius);
    return 0;
}
