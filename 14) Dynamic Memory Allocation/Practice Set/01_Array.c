/*
Write a program to dynamically create an array of size 6 capable of storing 6 integers. Integers to beentered by the user. . 
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the values : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The values are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}