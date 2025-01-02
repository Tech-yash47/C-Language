#include <stdio.h>
#include <string.h>

char *slice(char str[], int n, int m)
{
    char *rt1 = &str[n];
    char *rt2 = &str[m];
    str = rt1;
    str[m + 1] = '\0';
    return str;
}

int main()
{
    char str[] = "hello world";
    printf("%s", slice(str, 0, 4));
    return 0;
}