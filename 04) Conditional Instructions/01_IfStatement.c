#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age : ");
    scanf("%d", &age);
    if(age>10)
    {
        // We are inside if
        printf("Your age is greater than 10\n");
    }
    if(age%5==0)
    {
        // We are inside another if
        printf("Your age is divisible by 5\n");
    }
    return 0;
}