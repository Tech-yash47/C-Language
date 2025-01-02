#include <stdio.h>
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}
void reverse(int arr[], int n)
{
    int i = 0, temp;
    for (i = 0; i < n / 2; i++)
    { 
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12};
    int n = sizeof arr / sizeof arr[0];
    printarray(arr, n);
    reverse(arr, n);
    printarray(arr, n);
    return 0;
}