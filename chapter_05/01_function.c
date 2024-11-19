 #include<stdio.h>
 //function prototype
 int sum(int , int);
//  function definition
 int sum(int a,int b){
     printf("the sum is %d\n",a+b);
     return a+b;
      }
int sub(int a,int b); //function prototype
int sub(int a,int b){
  printf("the sub is %d\n",a-b);
}

 int main()
 {
   int a=1;
   int b=3;
   int c=5;
   int d= 8; 
   sum(a,b);//function call
   sum(a,c);
   sum(c,d);
    sub(c,d);
   return 0;
 }
