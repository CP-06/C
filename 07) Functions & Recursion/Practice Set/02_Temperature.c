/*
Write a function to convert Celsius temperature into Fahrenheit. 
*/

#include <stdio.h>
float c2f(float c)
{
    return ((9.0 / 5.0) * c) + 32;;
}
int main()
{
    float c;
    printf("Enter the temperature : ");
    scanf("%f", &c);
    printf("Celsius to Fahrenheit for %.2f is %.2f", c, c2f(c));
    return 0;
}