#include<stdio.h>
#include<string.h>

int main()
{
   char name[]= "YASH";
   char copy[90];
   strcpy(copy,name);
   printf("%s & \"%s\"",name,copy); 
    return 0;
}