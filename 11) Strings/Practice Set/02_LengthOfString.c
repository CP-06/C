/*
Write your own version of strlen function from <string.h> 
*/

#include <stdio.h>
int Strlen(char str[])
{
    int i = 0, count;
    char c = str[i];
    while(c!='\0')
    {
        c = str[i];
        i++;
    } 
    count = i-1;
    return count;
}
int main()
{
    char str[] = "Hello World";
    
    printf("The Length of the string is : %d", Strlen(str));
    return 0;
}