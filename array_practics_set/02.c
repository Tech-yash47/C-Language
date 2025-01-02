#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int* prt = a;
    printf(" the value of %u in address %d\n",prt+2,*(prt+2));
    
    return 0;
}