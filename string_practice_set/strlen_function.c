#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0, i = 0;
    char str[] = "hello"; // this is alternate for strlen()
    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    printf("the length of string : %d", count);
    return 0;
}