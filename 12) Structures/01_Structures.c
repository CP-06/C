#include <stdio.h>
#include <string.h>

struct employee
{
int code; // This declares a new user defined data type!
float salary;
char name[10];
}; // semicolon is important

int main()
{
    struct employee e1;
    e1.code = 4511;
    strcpy(e1.name, "Mohan");
    e1.salary = 54.44;
    printf("Employee Code : %d\n", e1.code);
    printf("Salary : %f\n", e1.salary);
    printf("Name : %s\n", e1.name);
    return 0;
}