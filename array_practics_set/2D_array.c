#include<stdio.h>

int main()
{
    int arr[3][10],num[]={2,3,5};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j]=num[i]*(j+1);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
             printf(" %d",arr[i][j]);
        }
       printf(" \n");
       printf(" \n");
       
        
    }
    
    return 0;
}