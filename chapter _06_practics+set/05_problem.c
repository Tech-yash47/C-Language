#include<stdio.h>
int avg(int* a,int* b){  int 

av =(*a+*b)/2;
    // printf("The avarge of %d %d is %d",a,b,(a+b)/2);
}
int main()
{
    int a=2, b =3,av;
    avg(a,b);
    printf("the %d",av);
    return 0;
}