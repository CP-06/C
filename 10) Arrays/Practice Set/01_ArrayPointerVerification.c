/*
Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element 
where ptr is a pointer pointing to the first element of the array. 
*/

#include <stdio.h>
int main()
{
    int a[10];
    printf("Enter the numbers in array :\n");
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d", &a[i]);
    } 
    int *ptr = a;
    printf("The value at address %p is %d", ptr+2,*(ptr+2));
    return 0;  
}