/*
Write a program to store the details of 3 employees from user defined data. Use the structure declared earlier. 
*/

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
    struct employee e1, e2, e3;

    printf("Enter the value of code\n");
    scanf("%d", &e1.code);
    printf("Enter the value of salary\n");
    scanf("%f", &e1.salary);
    strcpy(e1.name, "Mohan");

    printf("Enter the value of code\n");
    scanf("%d", &e2.code);
    printf("Enter the value of salary\n");
    scanf("%f", &e2.salary);
    strcpy(e2.name, "Rohan");

    printf("Enter the value of code\n");
    scanf("%d", &e3.code);
    printf("Enter the value of salary\n");
    scanf("%f", &e3.salary);
    strcpy(e3.name, "Vihan");

    printf("Employee 1 :- \n");
    printf("Name : %s\n", e1.name);
    printf("Employee Code : %d\n", e1.code);
    printf("Salary : %f\n", e1.salary);
    
    printf("Employee 2 :- \n");
    printf("Name : %s\n", e2.name);
    printf("Employee Code : %d\n", e2.code);
    printf("Salary : %f\n", e2.salary);
    
    printf("Employee 3 :- \n");
    printf("Name : %s\n", e3.name);
    printf("Employee Code : %d\n", e3.code);
    printf("Salary : %f\n", e3.salary);
    return 0;
}