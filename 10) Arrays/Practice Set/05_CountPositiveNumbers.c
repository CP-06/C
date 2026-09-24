/*
Write a program containing functions which counts the number of positive integers in an array. 
*/

#include <stdio.h>

int count (int a[], int n)
{
    int no_of_positive=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0){
            no_of_positive++;
        }
    }
    return no_of_positive;
}
int main()
{
    int a[100];
    int n1;
    printf("Enter the number of elements : ");
    scanf("%d", &n1);
    printf("Enter the elements in the array : \n");
    for(int i = 0 ; i < n1 ; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Number of positive integers is %d", count(a, n1));
    return 0;  
    
    
}