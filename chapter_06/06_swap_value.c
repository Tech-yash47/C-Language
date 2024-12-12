#include<stdio.h>

int swap(int* ,int*);

int swap(int *x,int *y){
   
int temp;
temp = *x;
*x = *y;
*y = temp;
}
int main()
{
    int x=4,y=7;
    swap(&x,&y);
   printf("%d %d",x,y);    

    return 0;
}                                                                                                         
                                                                                                                                                                                

