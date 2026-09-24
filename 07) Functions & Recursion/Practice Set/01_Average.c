/*
Write a program using function to find average of three numbers. 
*/

#include <stdio.h>
float average(int a, int b, int c);
float average(int a, int b, int c)
{
    return (a+b+c)/3.0;
}
int main()
{
    int a, b, c;
    printf("Enter 3 numbers :\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("The average of a, b and c is %.2f", average(a, b, c));
    return 0;
}