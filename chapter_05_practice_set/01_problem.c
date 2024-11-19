 #include<stdio.h>
 float avg(int a,int b,int c);

 float avg(int a,int b,int c){
    return (a+b+c)/3.0;}

 int main()
 {int a=4,b=15,c=6;

   printf("printf is %.2f",avg(a,b,c)); 
    return 0;
 }