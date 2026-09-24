#include <stdio.h>
int sum(int, int);
int sum(int a, int b)
{
    a = 6; // Sum function cannot change x using a because copy of x is provided to sum in a 
    //It means that a is directly used as a itself without taking the value of x
    return a + b; 
}
int main()
{
    int x = 1, y = 6;
    // printf("Sum is %d\n", sum(x, y));
    printf("The sum of %d and %d is %d\n", x, y, sum(x , y));
    printf("The value of x is %d", x);
    return 0;
}

// Here, actually value of x is getting copied in a but due to "a = 6", the value of a is getting updating.
// Hence, the out is produced as "The sum of 1 and 6 is 12", (which is wrong)