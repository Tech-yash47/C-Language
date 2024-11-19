#include<stdio.h>
float c2f(float c){ 
    return ((1.8*c)+32);}
// float f2c(float f){ 
    //   return ((f-32)*0.55);}


int main()
{ float c=45;
  float d=89;
    printf ("%f in farenhete is %f ",c,c2f(c));

    return 0;
}