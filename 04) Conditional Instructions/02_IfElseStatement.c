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
    else
    {
        // We are inside else
        printf("Your age is not greater than 10");
    }
    return 0;
}