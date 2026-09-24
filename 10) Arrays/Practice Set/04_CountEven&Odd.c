/*
Write a program containing functions which counts the number of even integers and odd integers in an array
*/

#include <stdio.h>

void count (int a[], int n)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even numbers : %d\n", even);
    printf("Number of odd numbers : %d\n", odd);
}
int main()
{
    int a[10];
    printf("Enter elements in the array :\n");
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d", &a[i]);
    }
    count(a, 10);
    return 0;
}