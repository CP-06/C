#include <stdio.h>
int main()
{
    char st[4];
    printf("Enter a string : ");
    scanf("%s", st); // for string we don't use &st as st itself is the adderss
    printf("The string is : %s", st);
    return 0;
}

// The method is used only to input the single word, i.e. multiword string cannot be given as input