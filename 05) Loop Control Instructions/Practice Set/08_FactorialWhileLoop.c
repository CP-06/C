/*
Write a program to calculate the factorial of a given number using a while loop. 
*/

#include <stdio.h>
int main()
{
    /* 
    8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    n! = 1 X 2 X 3 X 4 X 5 ..... X n
    0! = 1
    */
    int product=1;
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int i = 1;
    while(i <= n)
    {
        product *= i;
        i++;
    }
    printf("The factorial is %d", product);
    return 0;
}