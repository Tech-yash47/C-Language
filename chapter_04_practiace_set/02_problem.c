#include<stdio.h>

int main()
{
    int n;
    printf("Enter number for it's revers maltiples : ");
    scanf("%d",&n);
    for(int i=10; i; i--)
         printf("%d x %d = %d\n",n,i,n*i);
    return 0;
}