#include<stdio.h>
void swap(int* a,int* b){
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;}
int printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf(" %d",arr[i]);
    }}
void selection_sort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        int min =i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if (min != i){
            swap(&arr[i],&arr[min]);
        }
    }}
int main(){
    int arr[]={11,14,5,2,6,9,45};
    int n= sizeof arr/sizeof arr[0]; 
    selection_sort(arr,n);
    printArray(arr,n);
}
