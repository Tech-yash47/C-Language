#include<stdio.h>

int main()
{
    char rp[6];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&rp[i]);
    }
    rp[5]='\0';
    printf("%s",rp);
    
    return 0;
}