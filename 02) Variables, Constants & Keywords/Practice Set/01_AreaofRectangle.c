/*
Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs. 
b. Using inputs supplied by the user.
*/

#include <stdio.h>
int main()
{
    // Hard coded input
    int length = 3;
    int breadth = 6;
    printf("The area of this rectangle is %d\n", length * breadth);
    
    // User input
    int l, b;
    printf("Enter length\n");
    scanf("%d", &l);
    printf("Enter breadth\n");
    scanf("%d", &b);
    printf("The area of this rectangle is %d\n", l * b);
    return 0;
}