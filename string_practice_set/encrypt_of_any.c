#include<stdio.h>
#include<string.h>

void encrypt(char code[]){
      for (int i = 0; i < strlen(code); i++)
      {
        code[i] = code[i]+ 18;
      }
      
}
int main()
{
    char str[]="yash";
    encrypt(str);
    printf("%s",str);
    return 0;
}