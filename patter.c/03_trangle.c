#include<stdio.h>

int main()
{
    int c,r;
    c=r=4;
    for (int i = 1; i <=c; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf(" %d ",j);
            
        }
        printf(" \n");
    }
    
    return 0;
}