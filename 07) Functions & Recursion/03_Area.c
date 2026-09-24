/*
Use the library function to calculate the area of a square with side a. 
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("Enter the side : ");
    scanf("%d", &side);
    printf("The area of this square is %f\n", pow(side, 2));
    return 0;
}