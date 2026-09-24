#include <stdio.h>
int factorial(int);
int factorial(int n)
{ 
    if(n == 1 || n == 0) // Base condition
    { 
        return 1;
    }
    return n * factorial(n-1); // Factorial(n) = Factorial(n-1) X n
}

int main()
{
    int num;
    printf("Enter a numebr : ");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, factorial(num));
    return 0;
}