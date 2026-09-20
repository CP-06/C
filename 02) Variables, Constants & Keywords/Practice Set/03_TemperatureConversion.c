/*
Write a program to convert Celsius to Farenheit 
*/

#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter the temperature in Celcius : ");
    scanf("%f", &c);
    f = ((9.0 / 5.0) * c) + 32;
    printf("The value in Fahrenheit is %.1f", f);
    return 0;
}