#include<stdio.h>
int count(int arr[],int n){
    int no_of_positive=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
           no_of_positive ++;
        }
    }
   return no_of_positive; 
}

int main()
{
    int  arr[]={-1,-2,-3,4};
    int n=sizeof arr/sizeof arr[0];
    printf("The number of Positive Integer is %d",count(arr,n));
    return 0;
}