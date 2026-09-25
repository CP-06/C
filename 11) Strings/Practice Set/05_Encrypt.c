/*
Write a program to encrypt a string by adding 1 to the ascii value of its characters. 
*/

#include <stdio.h>
#include <string.h>
int main()
{
   char str[] = "All my money is under the pillow";
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
       str[i] = str[i] + 1;
    }
    printf("%s", str);
    return 0;
}