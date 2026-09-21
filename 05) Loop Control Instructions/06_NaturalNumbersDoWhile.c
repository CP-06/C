/*
Write a program to print the natural numbers till the limit enter by the user is reached.
*/

#include <stdio.h>
int main()
{
    int n, i=1;
    printf("Enter the limit : ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    }
    while(i<=n);
    return 0;
}