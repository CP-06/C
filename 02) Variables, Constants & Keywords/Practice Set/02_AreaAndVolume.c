/*
Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height. 
*/

#include <stdio.h>
int main()
{
    int r, h;
    printf("Enter the radius of the circle : ");
    scanf("%d", &r);
    printf("The area of circle with radius %d is %.2f\n", r, 3.14 * r * r);
    printf("Enter the height of the cylinder : ");
    scanf("%d", &h);
    printf("The volume of cylinder with radius %d and height %d is %.2f", r, h,  3.14 * r * r * h);
    return 0;
}