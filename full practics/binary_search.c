#include<stdio.h>

int binarysearch(int a[],int n,int target){
    int st,end;
    st=0;
    end=n-1; 
    
    while(st<=end){
        int mid = (st+end)/2;
        if (target>a[mid])
            st =mid +1;
        else if ( target < a[mid])
             end = mid - 1;
        else
           return mid;
    }
      return -1;
}
int main()
{
    int b[]= {1,2,3,4,5,6,7,8,9,10,11};
    int target = 11;
    int n = sizeof b/ sizeof b[0];
    int Index = binarysearch(b,n,target);
    if(Index == -1)
     printf("Element not found ");  
    else 
    printf("The Value Find at index %d",Index); 
    return 0;
}