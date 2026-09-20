/*
Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest. 
*/

 #include <stdio.h>
int main()
{
    float p;
    int r, t;
    printf("Enter the principle amount, rate of interest and time period : \n");
    scanf("%f %d %d", &p, &r, &t);
    printf("The value of simple interest is %f ", (p * r * t) / 100);
    return 0;
}