#include<stdio.h>

int main()
{
    int a[10];
    for (int  i = 0; i < 10; i++)
    {
        a[i]= 5*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf(" %d\n",a[i]);    }
    
    
    return 0;
}