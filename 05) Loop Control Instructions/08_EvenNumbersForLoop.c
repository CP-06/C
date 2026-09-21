/*
Write a program to print the even numbers
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the limit : ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}