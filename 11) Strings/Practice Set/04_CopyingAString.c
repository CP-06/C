/*
Write your own version of strcpy function from <string.h> 
*/

#include <stdio.h>
int mystrlen(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}
void mystrcpy(char target[], char source[])
{
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
}
int main()
{
    char source[] = "harish";
    char target[30];
    mystrcpy(target, source);
    printf("The source is : %s\n", source);
    printf("The target is : %s\n", target);
    return 0;
}