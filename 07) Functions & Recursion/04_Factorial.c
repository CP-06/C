# include <stdio.h>
void factorial(int n)
{
    int i, fact = 1;
    for(i = 1 ; i <= n ; i++)
    {
        fact *= i;
    }
    printf("The factorial of %d is : %d", n, fact);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    factorial(num);
    return 0;
}