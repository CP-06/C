/*
Write a program to decrypt the string encrypted using encrypt function in the last problem. 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Bmm!nz!npofz!jt!voefs!uif!qjmmpx";
    int len = strlen(str);
    for (int i = 0; i < len ; i++)
    {
       str[i] = str[i] - 1;
    }

    printf("%s", str);
    
    return 0;
}