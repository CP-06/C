#include <stdio.h>
int sum(int, int); // Function prototype
int sum(int x, int y) // Function definition
{
    return x+y;
}

int main()
{
    int a, b;
    printf("Enter 2 numbers : \n");
    scanf("%d %d", &a, &b);
    int c1  = sum(a,b); // Function call
    printf("%d\n", c1);

    int a1, b1;
    printf("Enter 2 numbers : \n");
    scanf("%d %d", &a1, &b1);
    int c2 = sum(a1,b1); // Function call
    printf("%d\n", c2);

    int a2, b2;
    printf("Enter 2 numbers : \n");
    scanf("%d %d", &a2, &b2);
    int c3 = sum(a2, b2); // Function call
    printf("%d\n", c3);

    return 0;
}