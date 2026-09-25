#include <stdio.h>
#include <string.h>
int main()
{
    char st[] = "Praveen";
    char s1[56] = "Praveen";
    char s2[56] = " Bhai";
    int len = strlen(st);
    printf("The length of the string is : %d\n", len);
    char target[30];
    strcpy(target, st); // target now contains "Harry"
    printf("String after copying : %s %s\n", st, target);
    strcat(s1, s2); // s1 now contains "helloharry" <no space in between>
    printf("Strings after concatinating : %s\n", s1);
    int a = strcmp("hello", "joke"); // DJ is negative
    printf("Value after comparision : %d\n", a);
    return 0;
}