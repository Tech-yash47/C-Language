#include <stdio.h>

int main()
{
    int m, n, sum = 0;
    // int arr[n];
    // arr[0]=0,arr[1]=1;
    printf("Enter the number of fabonachhi squance you want : ");
    scanf("%d", &n);
    int arr[n];
    arr[0] = 0, arr[1] = 1;
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }«
    for (int j = 0; j < n; j++)
    {
        printf("%d  ", arr[j]);
    }
    printf("\n");
    printf("What number you what to sum : ");
    scanf("%d", &m);
    for (int k = 0; k < m; k++)
    {
        sum += arr[k];
    }
    printf("%d", sum);
    return 0;
}