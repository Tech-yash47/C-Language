#include<stdio.h>

int main()
{
    int num1,num2,num3,num4;
printf("Enter first number : "); 
scanf("%d",&num1);
printf("Enter second number : "); 
scanf("%d",&num2);
printf("Enter thered number : "); 
scanf("%d",&num3);
printf("Enter fourt number : "); 
scanf("%d",&num4);
  
  if (num1>num2&&num1>num3&&num1>num4)printf("\n\t%d is the greatest number",num1);
 else if (num2>num1&&num2>num3&&num2>num4)printf("\n\t%d is the greatest number",num2);
 else if (num3>num2&&num3>num1&&num3>num4)printf("\n\t%d is the greatest number",num3);
 else if (num4>num2&&num4>num3&&num4>num1)printf("\n\t%d is the greatest number",num4);
 else printf("\n\tthise number are equal");
    return 0;
}