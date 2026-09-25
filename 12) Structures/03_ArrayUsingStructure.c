#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[1].code = 77;
    struct employee Praveen;
    Praveen.code = facebook[0].code;   // assign code
    Praveen.salary = 77.0;             // assign salary (float)
    strcpy(Praveen.name, "Praveen");   // assign name correctly
    printf("%d %.2f %s", Praveen.code, Praveen.salary, Praveen.name);
    return 0;
}
