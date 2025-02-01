#include<stdio.h>

void swap(int* a,int* b){
    int temp;
    temp = *a;
    *a= *b;
    *b=temp;}
void bubbleSort(int arr[],int n){
    for(int i = 0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]){
            swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int printArray(int arr[],int n){
    for (int i=0; i<n; i++){
        printf(" %d",arr[i]);
    }
} P
int main()
{
    int arr[]={4,1,2,3,5};
    int n = sizeof arr/ sizeof arr[0];
    bubbleSort(arr,n);
    printArray(arr,n);
    return 0;
}