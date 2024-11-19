#include<stdio.h>

int main()
{  
     int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    if (num==2)
        { printf("That is Prime number ");}
    else
    {
        switch (num%2)
        {
            case 0:
               printf("That is Prime number ");
                break;
            case 1:
                 printf("it is not prime number");
                break;
        }
    }
    return 0;
}