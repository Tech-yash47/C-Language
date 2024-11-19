#include<stdio.h>

int main()
{
    char a;
    printf("Enter any single charcter : ");
    scanf("%c",&a);
    
    if(a<=90&&a>=65) 
                 printf("\n\tTHIS IS HIGHER CASE CHARECTER");
    else if(a<=122&&a>=97) 
                 printf("\n\tthis is lower case charcter" );
    else 
        printf("/n/tthis is special charcter");
    return 0;
}