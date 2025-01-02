/**
 * @file compare_of_string.c
 * @brief Compares two strings using strcmp and prints the result.
 */
#include<stdio.h>
#include<string.h> // Include the string.h library for strcmp function

int main()               //based on ASCII  value 
{
   strcmp("yash","yash");//return 0 if "char" is same
   strcmp("yash","any");//return 1(+ value) if  first char AsCII value is more than second char
   strcmp("sh","any");//return -1(- value ) if   second char AsCII value is more than first charcter 
   printf("%d",strcmp("ash","ash")); 
    return 0;
}