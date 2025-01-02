#include<stdio.h>

int main()
{
    char comment[50];
    printf("Write A comment for collage :");
   gets(comment); // scanf("%s",comment); /*you not enter space in this format*/ 
    puts(comment);// printf("%s",comment);
    return 0;
}