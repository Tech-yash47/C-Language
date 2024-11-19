#include<stdio.h>
 
 int main()
 {
   float pi=3.14,R,area;
   printf("Enter radius for its area:");
   scanf("%f",&R);
   area = pi *  R * R;
   printf("the area of %f is : %f",R,area);
   return 0;
 }
