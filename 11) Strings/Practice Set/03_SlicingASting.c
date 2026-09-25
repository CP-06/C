/*
Write a function slice() to slice a string. It should change the original string such that it is now the 
sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.
*/

#include <stdio.h>
# include <string.h>
char *slice(char str[], int m, int n)
{  
    char *ptr1 = &str[m];
    // char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;
}
int main()
{
    char str[] = "C Praveen";
    int len = strlen(str);
    int m1, n1;
    printf("Enter the slicing limit within the length : %d\n", len);
    scanf("%d %d", &m1, &n1);
    printf("%s", slice(str, m1, n1));
    return 0;
}