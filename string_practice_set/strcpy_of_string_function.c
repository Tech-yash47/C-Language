#include <stdio.h>
#include <string.h>
void strcp(char st[], char gp[])     // this is alternate of "strcpy(st[],gp[]);"  function
{
    for (int i = 0; i < strlen(st); i++)
    {
       gp[i] = st[i];
    }   
}
int main()
{
    char st[] = "world";
    char p[20];
    strcp(st, p);
    printf("%s", p);

    return 0;
}