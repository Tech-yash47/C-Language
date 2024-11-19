#include<stdio.h>

int main()
{
    int a,reminder;
    printf("enter the number to check it is devisible by 97 :");
    scanf("%d",a);
    reminder = a%97;
    
    if (reminder = 1)
    {
        printf("It is divisible by 97");
    }
    else
    {
        printf("It is not divisible by 97");
    }
    
    
    return 0;
}