#include<stdio.h>

int main()
{
    int  x =2;
    int *p=&x;
    printf("The adderss of x is %u\n",&x);
    printf("the value of p is %d",*p);
    return 0;
}//  & is use for the block of value determien 
//  %u is use for give decimal only!!