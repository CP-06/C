#include <stdio.h>

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");
}
void reverse(int arr[], int n)
{
   int temp;
   for (int i = 0; i < n/2; i++)
   {
    temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;
   }
}
int main()
{
    int arr[100];
    int n1;
    printf("Enter the number of elements : ");
    scanf("%d", &n1);
    printf("Enter the elements in the array : \n");
    for(int i = 0 ; i < n1 ; i++)
    {
        scanf("%d", &arr[i]);
    }
    printArray(arr, n1);
    reverse(arr, n1);
    printArray(arr, n1);
    return 0;
}