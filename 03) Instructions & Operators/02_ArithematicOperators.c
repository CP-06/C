#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a & b : \n");
    scanf("%d %d", &a, &b);
    int sum = a + b; // Addition
    int difference = a - b; // Subtrction
    int product = a * b; // Multiplication
    int quotient = a / b; // Division will return quotient
    int remainder = a % b; // Division will return remainder
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    return 0;
}