/*
Write a program to take string as an input from the user using %c and %s confirm that the strings are equal. 
*/

#include <stdio.h>
int main()
{
    char str[6];
    printf("Enter the string : \n");
    // scanf("%s", str);
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]); 
        fflush(stdin);
    }
    str[5] = '\0';
    printf("%s", str);
    return 0;
}