#include<stdio.h>

int main()
{
    int num[5];
    for ( int i = 0; i <5; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("%d %d %d %d %d",num[0],num[1],num[2],num[3],num[4]);
    return 0;
}