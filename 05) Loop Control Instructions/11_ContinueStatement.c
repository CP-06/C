#include <stdio.h>
int main()
{
    for(int i = 0; i < 10; i++)
    {
        if(i==5)
        {
            continue; // skips this particular iteration
        }
        printf("i is %d\n", i);
    }
    printf("For loop is done!");
    return 0;
}