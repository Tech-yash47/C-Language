#include<stdio.h>

int main()
{   int n,i=1;
    printf("Enter number for it's table : ");
    scanf("%d",&n);
    do
    {
        printf("\t%d x %d = %d\n",n,i,n*i);
        i++;
    } while (i<=10);
    
    return 0;
}